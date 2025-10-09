// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 12
// Problema planteado: Determinar si una cadena es palíndromo

#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(string texto) {
    string limpio = "";
    for (int i = 0; i < texto.size(); i++) {
        char c = tolower(texto[i]);
        if (c >= 'a' && c <= 'z') limpio += c;
    }
    int i = 0, j = limpio.size() - 1;
    while (i < j) {
        if (limpio[i] != limpio[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);
    if (esPalindromo(texto))
        cout << "Es palindromo";
    else
        cout << "No es palindromo";
    return 0;
}
