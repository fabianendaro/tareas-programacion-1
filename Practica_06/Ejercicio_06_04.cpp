// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 4
// Problema planteado: Rotar un vector k posiciones a la derecha

#include <iostream>
#include <vector>
using namespace std;

void rotar(vector<int>& v, int k) {
    int n = v.size();
    k = k % n;
    vector<int> temp(v);
    for (int i = 0; i < n; i++)
        v[(i + k) % n] = temp[i];
}

int main() {
    int n, k, num;
    vector<int> v;
    cout << "Ingrese cantidad de numeros: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Num " << i+1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    cout << "Rotar cuantas posiciones: ";
    cin >> k;
    rotar(v, k);
    cout << "Vector rotado: ";
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}
