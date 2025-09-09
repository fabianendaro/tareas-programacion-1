// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 2
#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int  x=1, lanzamiento=0;
    double porcentaje_x=0, porcentaje_c=0, contador=0, contador2=0, moneda;
    srand(time(NULL));
    cout<< "Ingrese el numero de veces que lanzara la moneda: ";
    cin>> moneda;
    while(x<= moneda){
        //usamos solo los residuos que son 0 o 1 porque la moneda solo puede ser cara o cruz
        lanzamiento= (rand()%2)+1;
        x++;
        //usamos if para sumar 1 del lanzamiento si sale 1 para aumentar el contador de caras que es el simbolo * 
        if(lanzamiento == 1){
        contador2++;
        cout << "* ";}
        else {
        contador++;
        cout << "x ";}
    }
    cout<< endl;
    porcentaje_x = ((contador/moneda)*100);
    porcentaje_c = ((contador2/moneda)*100);
    cout<< "El porcentaje de caras es: "<< porcentaje_c<<"%"<<endl;
    cout<< "El porcentaje de cruz es: "<< porcentaje_x<<"%"<<endl;
    return 0;
}