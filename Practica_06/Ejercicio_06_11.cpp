// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 11
// Problema planteado: Dividir cadena por un delimitador

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> dividir(string texto, char delim) {
    vector<string> partes;
    string palabra = "";
    for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == delim) {
            partes.push_back(palabra);
            palabra = "";
        } else palabra += texto[i];
    }
    partes.push_back(palabra);
    return partes;
}

int main() {
    string texto;
    char delim;
    cout << "Ingrese texto: ";
    getline(cin, texto);
    cout << "Ingrese delimitador: ";
    cin >> delim;
    vector<string> partes = dividir(texto, delim);
    for (int i = 0; i < partes.size(); i++)
        cout << partes[i] << endl;
    return 0;
}
