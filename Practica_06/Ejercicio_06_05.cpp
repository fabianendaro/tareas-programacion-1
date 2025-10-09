// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 5
// Problema planteado: Mostrar clientes comunes entre dos listas sin usar set

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int yaExiste(vector<string> lista, string nombre) {
    int i = 0;
    while (i < lista.size()) {
        if (lista[i] == nombre) return 1;
        i++;
    }
    return 0;
}

void interseccion(vector<string> a, vector<string> b) {
    vector<string> comunes;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                if (yaExiste(comunes, a[i]) == 0) {
                    comunes.push_back(a[i]);
                }
            }
        }
    }

    if (comunes.size() > 0) {
        cout << "Clientes comunes:" << endl;
        for (int i = 0; i < comunes.size(); i++) {
            cout << comunes[i] << endl;
        }
    } else {
        cout << "No hay clientes comunes." << endl;
    }
}

int main() {
    vector<string> empresaA = {"Luis","Ana","Carlos","Maria","Jose"};
    vector<string> empresaB = {"Maria","Jose","Lucia","Pedro","Luis"};
    interseccion(empresaA, empresaB);
    return 0;
}
