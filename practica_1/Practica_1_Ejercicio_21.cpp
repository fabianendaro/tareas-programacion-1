// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 21
#include <iostream>
using namespace std;
int main (){
    int numero_1=0, numero_2=0,x=1, suma=0;
    cout<<" Este programa calcula la multiplicacion de numero_1 x numero_2"<< endl;
    cout<<" Ingrese un numero: ";
    cin>> numero_1;
    cout<<" Ingrese un numero: ";
    cin>> numero_2;
    //usamos while para sumar numero_2 las veces de numero_1
    while( x <=numero_2){
       suma+= numero_1;
       x++;
    }
    cout<< " La multiplicacion de "<<numero_1<<" x "<<numero_2<<" = "<<suma;
    return 0;
}