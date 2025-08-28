// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 26/08/2025 
// Número de ejercicio: 8 
#include <iostream>
using namespace std;
main (){
    int NUMERO, par;
    cout<<"Ingrese un numero entero: ";
    cin>> NUMERO;
    par= NUMERO % 2;
    if(par == 0){
      cout<<"El numero es par"; //usamos la condicional if para saber si es par, incluyendo al 0
    }
    else{
      cout<<"El numero es impar";
    }
    return 0;
}