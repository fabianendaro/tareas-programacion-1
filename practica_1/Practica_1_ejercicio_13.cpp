// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 26/08/2025 
// Número de ejercicio: 13 
#include <iostream>
using namespace std;

int main() {
   int numero, suma; 
   cout<< "Ingrese un numero: ";
   cin>> numero;
   suma=(numero*(numero+1))/2; //añadimos la formula para sumar todos los enteros hasta el numero N ingresado
   cout<<"La suma de todos los enteros hasta el numero ingresado es: "<<suma;
return 0;
}