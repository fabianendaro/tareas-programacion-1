// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 19
#include<iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout<<"Su tabla del 1 al 10 del "<<numero<< " es: "<<endl;
    for(int x=1; x<=10; x++){
    cout<< numero<< " x "<< x<< " = "<< x*numero<<endl;
    }
    return 0;
}