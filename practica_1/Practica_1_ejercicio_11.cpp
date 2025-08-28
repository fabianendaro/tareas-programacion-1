// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 26/08/2025 
// Número de ejercicio: 11 
#include <iostream>
using namespace std;
main(){
    int mes;
    cout<<"Ingrese un numero del 1-12 para saber que mes es: ";
    cin>>mes;
    if (mes==1)
    {
        cout<< "El mes es Enero";
    }
    else if (mes==2){
         cout<< "El mes es Febrero";
    }
    else if (mes==3){
         cout<< "El mes es Marzo";
    }
    else if (mes==4){
         cout<< "El mes es Abril";
    }
    else if (mes==5){
         cout<< "El mes es Mayo";
    }
    else if (mes==6){
         cout<< "El mes es Junio";
    }
    else if (mes==7)
    {
        cout<< "El mes es Julio";
    }
    else if (mes==8){
         cout<< "El mes es Agosto";
    }
    else if (mes==9){
         cout<< "El mes es Septiembre";
    }
    else if (mes==10){
         cout<< "El mes es Octubre";
    }
    else if (mes==11){
         cout<< "El mes es Noviembre";
    }
    else if (mes==12){
         cout<< "El mes es Diciembre";
    }
    else{
         cout<< "Mes Invalido"; //numeros negativos o mayores a 12
    }
    return 0;
}