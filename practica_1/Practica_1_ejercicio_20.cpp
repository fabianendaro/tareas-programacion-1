// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 20
#include <iostream>
using namespace std;
main(){
    //usamos long long para que salgan resultados de 19 digitos
    long long int numero=0, suma_de_digitos=0;
    cout<< " Ingrese un numero: ";
    cin>> numero;
    while(numero>0){
        suma_de_digitos++; 
        numero=numero/10;
    }
    cout<< " Los digitos del numero ingresado son: "<< suma_de_digitos;
    return 0;
}