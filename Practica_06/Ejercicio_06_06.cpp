// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 6
// Problema planteado: Calcular el porcentaje de estudiantes en cada rango de calificación

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(vector<int>& notas, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) notas.push_back(rand() % 101);
}

void porcentajes(vector<int> notas) {
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;
    for (int i = 0; i < notas.size(); i++) {
        if (notas[i] <= 59) reprobado++;
        else if (notas[i] <= 79) regular++;
        else if (notas[i] <= 89) bueno++;
        else excelente++;
    }

    cout << "Reprobado: " << (reprobado * 100.0 / notas.size()) << "%\n";
    cout << "Regular: " << (regular * 100.0 / notas.size()) << "%\n";
    cout << "Bueno: " << (bueno * 100.0 / notas.size()) << "%\n";
    cout << "Excelente: " << (excelente * 100.0 / notas.size()) << "%\n";
}

int main() {
    vector<int> notas;
    int n;
    cout << "Ingrese cantidad de estudiantes: ";
    cin >> n;
    llenar(notas, n);
    porcentajes(notas);
    return 0;
}
