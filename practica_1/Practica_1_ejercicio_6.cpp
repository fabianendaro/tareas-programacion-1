// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 25/08/2025 
// Número de ejercicio: 6 
#include <iostream>
using namespace std;
main (){
    double Numero;
    cout<<"Ingrese su numero: ";
    cin>>Numero;
    if (Numero>0)
    {
        cout<< "El numero es positivo: "; //usamos if como condicional para saber si el numero es mayor a 0
    }
    else if (Numero<0){
         cout<< "El numero es negativo: ";
    }
    else{
         cout<< "El numero es = 0";
    }
    return 0;
}