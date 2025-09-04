// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 22
#include<iostream>
using namespace std;

int main()
{   int Numero_1, Numero_2;
    cout << "Ingrese Numero_1: ";
    cin >> Numero_1;
    cout << "Ingrese Numero_2: ";
    cin >> Numero_2;
    if((Numero_2%Numero_1)==0){
    for(int x=1; x<=Numero_2; x++){
     if(Numero_2==Numero_1*x){
     cout<< "Existe un numero "<< x<< " tal que "<<x<<" x " << Numero_1<<" es igual a "<< Numero_2<< endl;
     cout<< Numero_2<<" es multiplo de " <<Numero_1;
     }
    }
    }
    else if((Numero_1%Numero_2)==0){
    for(int x=1; x<=Numero_1; x++){
     if(Numero_1==Numero_2*x){
     cout<< "Existe un numero "<< x<< " tal que "<<x<<" x " << Numero_2<<" es igual a "<< Numero_1<< endl;
     cout<< Numero_1<<" es multiplo de " <<Numero_2;
     }
    }
    }
    //Si el residuo de las congruencias es distinto de 0 los numeros no son multiplos 
    else { 
     cout<< Numero_2<<" no es multiplo de " <<Numero_1;
     }
    return 0;
}