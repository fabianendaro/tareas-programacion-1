// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 5
#include <iostream> 
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int numero, x=1, random=0, maximo=0, minimo=0;
    double sumatoria=0, promedio=0;
    cout<< "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin>> numero;
    // Este ciclo while genera la cantidad de números aleatorios indicada por el usuario
    while(x<=numero){
        // Cada número aleatorio estará dentro del rango 1 a 1000
        random=(rand()%1000)+1;
        sumatoria+=random;        
        promedio= sumatoria/ numero;
        // Este bloque se encarga de identificar el número mayor y menor entre los generados
        if(x == 1){
          maximo = random;
          minimo = random;}
        if(random > maximo){
          maximo = random;}
        if(random < minimo){
          minimo = random;}
        x++;
    }
    // Impresión de los resultados obtenidos
    cout<< endl;
    cout<< "a. Sumatoria de todos los numeros: "<< sumatoria<< endl;
    cout<< "b. Promedio: "<<promedio<< endl;
    cout<< "c. Mayor valor generado: "<<maximo<< endl;
    cout<< "d. Menor valor generado: "<<minimo<< endl;

    return 0;
}
