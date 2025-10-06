// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void GenerarNumeros(int N) {
    srand(time(0));
    int suma = 0;

    for (int i = 1; i <= N; i++) {
        int num = rand() % 1000 + 1;
        suma += num;
        cout << num;
        if (esPrimo(num)) cout << " *";
        cout << endl;
    }

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << (float)suma / N << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    GenerarNumeros(n);
    return 0;
}
