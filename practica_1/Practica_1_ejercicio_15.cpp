// Materia: Programación I, Paralelo 4 
// Autor: Willy Edwin Tenorio Palza 
// Carnet: 8357097 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 27/08/2025 
// Número de ejercicio: 15 
#include <iostream>
using namespace std;
int main() {
    int notas;
    float nota, promedio, suma=0;
    cout << "Cuantas notas ingresara al programa?: ";
    cin >> notas;
    for (int i = 1; i <= notas; i++) {
        cout << "Ingrese las notas " << i << ": ";
        cin >> nota;
        suma += nota; 
    }
    promedio = suma / notas; 
    cout << "El promedio general es: " << promedio << endl; //el programa mediante la formula, sumara las notas
                                                            //y las dividira por el numero N ingresado al inicio
    return 0;
}