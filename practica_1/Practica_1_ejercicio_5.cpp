// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 25/08/2025 
// Número de ejercicio: 5 
#include <iostream>
using namespace std;
main (){
    double temperatura_kelvin,temperatura_centigrados; //definimos las variables de temperatura en centigrados y Kelvin
    cout<<"Ingrese su temperatura en grados centigrados [C°]: ";
    cin>> temperatura_centigrados;
    temperatura_kelvin= 273 + temperatura_centigrados; //añadimos la formula para grados kelvin = C°+273
    cout<<"Su temperatura en grados kelvin es: "<<temperatura_kelvin;
    return 0;
}