// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 7
// Problema planteado: Contar cuántos píxeles hay en cada rango de 10 unidades (0-255)

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(vector<int>& v, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) v.push_back(rand() % 256);
}

void contarRangos(vector<int> v) {
    vector<int> conteo(26, 0);
    for (int i = 0; i < v.size(); i++) conteo[v[i] / 10]++;
    for (int i = 0; i < 26; i++) {
        cout << i*10 << "-" << i*10 + 9 << ": " << conteo[i] << " pixeles\n";
    }
}

int main() {
    vector<int> imagen;
    int n;
    cout << "Ingrese cantidad de pixeles: ";
    cin >> n;
    llenar(imagen, n);
    contarRangos(imagen);
    return 0;
}
