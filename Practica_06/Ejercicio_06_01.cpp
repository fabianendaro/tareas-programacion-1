// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 1
// Problema planteado: Calcular la desviación típica de edades ingresadas

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double calcularDesviacion(vector<int> edades) {
    double suma = 0, promedio = 0, sumaCuadrados = 0;
    int n = edades.size();
    for (int i = 0; i < n; i++) suma += edades[i];
    promedio = suma / n;
    for (int i = 0; i < n; i++) sumaCuadrados += pow(edades[i] - promedio, 2);
    return sqrt(sumaCuadrados / n);
}

int main() {
    vector<int> edades;
    int edad;
    cout << "Ingrese edades (-1 para terminar): ";
    cin >> edad;
    while (edad != -1) {
        edades.push_back(edad);
        cin >> edad;
    }
    if (edades.size() > 0)
        cout << "Desviacion tipica: " << calcularDesviacion(edades);
    else
        cout << "No se ingresaron datos.";
    return 0;
}
