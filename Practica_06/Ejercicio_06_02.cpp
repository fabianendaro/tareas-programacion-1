// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 2
// Problema planteado: Buscar y ordenar producción de minerales

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void mostrar(vector<string> n, vector<double> p) {
    for (int i = 0; i < n.size(); i++)
        cout << n[i] << "  " << p[i] << endl;
}

void ordenar(vector<string>& n, vector<double>& p) {
    for (int i = 0; i < p.size() - 1; i++) {
        for (int j = i + 1; j < p.size(); j++) {
            if (p[j] > p[i]) {
                double temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                string temp2 = n[i];
                n[i] = n[j];
                n[j] = temp2;
            }
        }
    }
}

void buscar(vector<string> n, vector<double> p, string nombre) {
    int i = 0, encontrado = 0;
    while (i < n.size()) {
        if (n[i] == nombre) {
            cout << "Produccion: " << p[i] << " TM";
            encontrado = 1;
        }
        i++;
    }
    if (encontrado == 0) cout << "No encontrado";
}

int main() {
    vector<string> minerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    vector<double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    string nombre;
    cout << "Ingrese mineral: ";
    cin >> nombre;
    buscar(minerales, produccion, nombre);
    cout << "\n\nOrdenado (mayor a menor):\n";
    ordenar(minerales, produccion);
    mostrar(minerales, produccion);
    return 0;
}
