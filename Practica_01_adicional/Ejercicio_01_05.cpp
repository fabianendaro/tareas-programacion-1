// Materia: Programación I, Paralelo 4
// Autor: Fabian Endara Baptista
// Carnet: 10929202
// Carrera del estudiante: Ingenieria biomedica
// Fecha creación: 01/10/2025

#include <iostream>
using namespace std;

double ParteFraccionaria(double num) {
    int parteEntera = (int)num;
    return num - parteEntera;
}

int main() {
    double numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La parte fraccionaria es: " << ParteFraccionaria(numero) << endl;
    return 0;
}
