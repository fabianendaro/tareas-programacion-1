// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

int EncontrarMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;
    cout << "El mayor es: " << EncontrarMax(x, y) << endl;
    return 0;
}
