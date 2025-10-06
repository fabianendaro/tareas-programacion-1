// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

bool esPar(int n) {
    if (n % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPar(num))
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;

    return 0;
}
