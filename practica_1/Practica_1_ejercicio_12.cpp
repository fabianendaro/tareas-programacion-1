// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 26/08/2025 
// Número de ejercicio: 12 
#include <iostream>
using namespace std;
main (){
    int numero;
    do{
      cout<<"Ingrese un numero entre el 1 y el 5: ";
      cin>>numero;
    } while(numero<1 || numero>5);
    return 0;
}