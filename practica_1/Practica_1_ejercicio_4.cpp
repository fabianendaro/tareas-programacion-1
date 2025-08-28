// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 25/08/2025 
// Número de ejercicio: 4 
#include <iostream>
#include <cmath> //importamos la libreria que nos permite usar la constante pi 
using namespace std;
int main(){
    long double r, Volumen;
    cout<<"Ingrese el radio de su esfera: ";
    cin>>r;
    Volumen = (4.0/3.0)*M_PI*r*r*r;
    cout<<"El volumen es: "<<Volumen;
    return 0;
}