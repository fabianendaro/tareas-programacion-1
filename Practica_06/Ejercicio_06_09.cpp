// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 9
// Problema planteado: Invertir el orden de las palabras en una oración

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> dividir(string oracion) {
    vector<string> palabras;
    string palabra = "";
    for (int i = 0; i < oracion.size(); i++) {
        if (oracion[i] == ' ') {
            if (palabra != "") palabras.push_back(palabra);
            palabra = "";
        } else palabra += oracion[i];
    }
    if (palabra != "") palabras.push_back(palabra);
    return palabras;
}

int main() {
    string oracion;
    cout << "Ingrese oracion: ";
    getline(cin, oracion);
    vector<string> palabras = dividir(oracion);
    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i > 0) cout << " ";
    }
    return 0;
}
