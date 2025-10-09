// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 3
// Problema planteado: Mostrar combinaciones aleatorias de nombre, apellido y edad

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrar(vector<string> n, vector<string> a, vector<int> e, int rep) {
    srand(time(0));
    for (int i = 0; i < rep; i++) {
        int in = rand() % n.size();
        int ia = rand() % a.size();
        int ie = rand() % e.size();
        cout << n[in] << " " << a[ia] << ", Edad: " << e[ie] << endl;
    }
}

int main() {
    vector<string> nombres = {"Ana","Luis","Maria","Jose","Carla","Juan","Marta","Pedro","Lucia","Pablo"};
    vector<string> apellidos = {"Perez","Gomez","Lopez","Torres","Rojas","Suarez","Flores","Mendez","Diaz","Quispe"};
    vector<int> edades = {20,21,22,23,24,25,26,27,28,29};
    int n;
    cout << "Cuantas combinaciones desea generar: ";
    cin >> n;
    mostrar(nombres, apellidos, edades, n);
    return 0;
}
