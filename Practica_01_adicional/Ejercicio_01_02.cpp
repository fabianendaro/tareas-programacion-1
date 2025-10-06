// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num, suma = 0, contador = 0;

    cout << "Ingrese numeros (0 o negativo para terminar):" << endl;
    while (true) {
        cin >> num;
        if (num <= 0) break; // única salida válida
        if (esPrimo(num)) {
            suma += num;
            contador++;
        }
    }

    if (contador > 0)
        cout << "Promedio de primos: " << (float)suma / contador << endl;
    else
        cout << "No se ingresaron numeros primos." << endl;

    return 0;
}
