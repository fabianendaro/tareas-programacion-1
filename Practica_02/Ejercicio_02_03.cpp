// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 3
#include <iostream>
#include <ctime> //importamos libreria que nos permite crear numeros aletarios
using namespace std;
int main(){
    int numero=0, factorial=1, rango;
    srand(time(NULL));
    cout<< "Ingrese el rango de su numero aletorio factorial: " ;
    cin >> rango;
    numero= (rand()% rango)+1;
    // El for calcula el factorial del numero aleatorio generado
    for(int f=1; f<=numero; f++){
       factorial*=f;
    }
    cout<< "El factorial de "<< numero<< " es: "<<factorial;
    return 0;
}