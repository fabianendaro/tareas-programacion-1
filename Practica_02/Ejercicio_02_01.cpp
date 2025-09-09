// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 1
#include <iostream>
#include <ctime>
using namespace std;
int main (){
    int Dado,lanzamiento, f=1, contador=0;
    srand(time(NULL));
    cout<< "Ingrese el numero de veces que lanzara el dado: ";
    cin>> lanzamiento;
    while( f <= lanzamiento){
    //Un dado solo tiene 6 caras, por ende usamos:
    Dado=(rand()%6)+1;
    cout<< Dado<< " ";
    if((Dado%2)==0){
        contador++;
    }
    f++;
    } 
    cout<< endl;
    cout<< "El numero de veces que salio una cara par en sus lanzamientos fue: "<<contador;
    return 0;
}