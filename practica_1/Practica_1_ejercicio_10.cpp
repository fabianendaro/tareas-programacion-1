// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 26/08/2025 
// Número de ejercicio: 10 
#include <iostream>
using namespace std;
main(){
    int nota;
    cout<<"Ingrese su nota: ";
    cin>>nota;
    if (51<=nota && nota<60)
    {
        cout<< "Calificacion = C";
    }
    else if (60<=nota && nota<70){
         cout<< "Calificacion = C+";
    }
    else if (70<=nota && nota<80){
         cout<< "Calificacion = B";
    }
    else if (80<=nota && nota<90){
         cout<< "Calificacion = B+";
    }
    else if (90<=nota && nota<=95){
         cout<< "Calificacion = A";
    }
    else if (95<=nota && nota<=100){
         cout<< "Calificacion = A+";
    }
    else{
         cout<< "Reprobado"; //si la nota que pone el usuario es menor a 51
    }
    return 0;
}