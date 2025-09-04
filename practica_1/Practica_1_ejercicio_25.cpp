// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 25
#include <iostream>
using namespace std;
int main(){
    int numero;
    char respuesta= 's';
    while (respuesta!='n'){
    cout<< "Ingrese un numero: ";
    cin>> numero;
    int x=1;
    while(x<=10){
        cout<< numero<< " x "<< x<< " = "<< numero*x<<endl;
    x++;}
    cout<< " ¿Desea calcular otra tabla? (s/n) ";
    cin>> respuesta;

    switch(respuesta){
        case 's':
         break;
        case 'n':
         break;
        default:
         cout << "Opción no valida. " << endl;
         respuesta = 'n';
         break;
    }}
    return 0;
}