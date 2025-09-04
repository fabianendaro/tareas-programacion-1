// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 23

#include <iostream>
using namespace std;
int main(){
    int numero, numero_invertido=0,modulo;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    //While para invertir el numero 
    while (numero>0)
    {   
        modulo = numero%10;
        numero_invertido = modulo + numero_invertido*10;
        numero=numero/10;
    }
    cout<< "El numero invertido es: "<<numero_invertido;
    return 0;
}