// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 8
// Problema planteado: Validar formato de correo electrónico

#include <iostream>
#include <string>
using namespace std;

bool esCorreoValido(string correo) {
    int arrobas = 0, posArroba = -1, i = 0;
    while (i < correo.size()) {
        if (correo[i] == '@') {
            arrobas++;
            posArroba = i;
        }
        i++;
    }
    if (arrobas != 1) return false;
    int j = posArroba + 1;
    while (j < correo.size()) {
        if (correo[j] == '.') return true;
        j++;
    }
    return false;
}

int main() {
    string correo;
    cout << "Ingrese correo: ";
    cin >> correo;
    if (esCorreoValido(correo))
        cout << "Correo electronico valido";
    else
        cout << "Correo electronico invalido";
    return 0;
}
