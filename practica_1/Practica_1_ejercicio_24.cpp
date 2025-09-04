// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 24
#include <iostream>
using namespace std;
int main (){
    int opcion_selecionada=-1;
    //si el usuario no ingresa 0, el menu se mostrara en bucle
    while(opcion_selecionada !=0 ){
    cout<< "1. Opcion 1 "<<endl;
    cout<< "2. Opcion 2 "<<endl;
    cout<< "3. Opcion 3 "<<endl;
    cout<< "0. Salir "<<endl;
    cout<< "Selecione una opcion: ";
    cin>> opcion_selecionada;
    //Aqui comienza para hacer el menu con switch
    switch (opcion_selecionada)
    {
    case 1:
        cout<< "Has selecionado: 1. Opcion 1"<<endl;
        break;
    case 2:
        cout<< "Has selecionado: 2. Opción 2"<<endl;
        break;
    case 3:
        cout<< "Has selecionado: 3. Opción 3"<<endl;
        break;  
    case 0:
        cout<< "Has selecionado: 0.Salir"<<endl;
        break;
    default:
        cout<< "Opcion no valida"<<endl;
        break;
    }}
}