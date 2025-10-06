// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LanzarMoneda(int N) {
    int caras = 0, cruces = 0;
    srand(time(0));

    for (int i = 1; i <= N; i++) {
        int resultado = rand() % 2; // 0 o 1
        if (resultado == 0)
            caras++;
        else
            cruces++;
    }

    cout << "Caras: " << (caras * 100.0 / N) << "%" << endl;
    cout << "Cruces: " << (cruces * 100.0 / N) << "%" << endl;
}

int main() {
    int veces;
    cout << "Ingrese el numero de lanzamientos: ";
    cin >> veces;
    LanzarMoneda(veces);
    return 0;
}
