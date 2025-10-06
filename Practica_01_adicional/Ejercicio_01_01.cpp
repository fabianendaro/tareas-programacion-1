// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    bool menor80 = false;

    for (int i = 1; i <= 5; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
        if (nota < 80) menor80 = true;
    }

    float promedio = suma / 5;
    if (promedio >= 85 && !menor80)
        cout << "El estudiante esta en la lista de honor." << endl;
    else
        cout << "El estudiante NO esta en la lista de honor." << endl;

    return 0;
}
