// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 16
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    bool Primo=true;
    int numero, divisores, absoluto;
    cout<< "Ingrese un numero: ";
    cin>> numero;
    absoluto= fabs(numero);
    if(numero>=2){
    for (int x=2; x< absoluto; x++){
        divisores= numero%x;
     if(divisores==0){
        Primo= false;
        break;
     }
    }
    if (Primo)
    {
      cout<< numero<< " es primo";    }
    else
    {
      cout<< numero<< " no es primo";
    }    
}
 else if (numero<=0){
    cout<<"Numero invalido";

 }
 else{
    cout<<"El numero no es primo";
 }
    return 0;
}
