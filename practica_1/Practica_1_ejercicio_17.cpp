// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 17
#include <iostream>
using namespace std;
int main() {
    int Numero_1, Numero_2, suma=0, suma_2=0;
    cout<<"Ingrese un Numero_1: ";
    cin>>Numero_1;
    cout<<"Ingrese un Numero_2: ";
    cin>>Numero_2;
    for (int i = 1; i < Numero_1; i++)
    {
      if (Numero_1%i==0){
        suma+=i;
      }
    }
     for (int i = 1; i < Numero_2; i++)
    {
      if (Numero_2%i==0){
        suma_2+=i;
      }
    }
     if(suma_2==Numero_1 && suma==Numero_2){ //condicional de numero amigo
      cout<<"Los numeros "<<Numero_1<<" y "<<Numero_2<<" son numeros amigos.";
     }
     else{
      cout<<"Los numeros "<<Numero_1<<" y "<<Numero_2<<" no son numeros amigos.";
     }
    return 0;
}