// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 13
// Problema planteado: Poner en mayúscula la primera letra de cada palabra

#include <iostream>
#include <string>
using namespace std;

string capitalizar(string texto) {
    bool inicioPalabra = true;
    for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == ' ') inicioPalabra = true;
        else if (inicioPalabra) {
            if (texto[i] >= 'a' && texto[i] <= 'z')
                texto[i] = texto[i] - 32;
            inicioPalabra = false;
        }
    }
    return texto;
}

int main() {
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);
    cout << capitalizar(texto);
    return 0;
}
