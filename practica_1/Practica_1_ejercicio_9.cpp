// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 26/08/2025 
// Número de ejercicio: 9 
#include <iostream>
using namespace std;
main(){
    int edad;
    cout<<"Ingrese su edad: ";
    cin>>edad;
    if (0<edad && edad<=13)
    {
        cout<< "El usuario es un nino";
    }
    else if (13<edad && edad<=18){
         cout<< "El usuario es adolescente";
    }
    else if (18<edad && edad<60){
         cout<< "El usuario es adulto";
    }
    else if (60<=edad){
         cout<< "El usuario es adulto mayor";
    }
    else{
         cout<< "Edad invalida";
    }
    return 0;
}