// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 14
// Problema planteado: Contar cuántas veces aparece cada vocal en una frase

#include <iostream>
#include <string>
using namespace std;

void contarVocales(string texto) {
    int a=0, e=0, i=0, o=0, u=0;
    for (int k = 0; k < texto.size(); k++) {
        char c = tolower(texto[k]);
        if (c == 'a') a++;
        else if (c == 'e') e++;
        else if (c == 'i') i++;
        else if (c == 'o') o++;
        else if (c == 'u') u++;
    }
    cout << "A: " << a << endl;
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;
}

int main() {
    string texto;
    cout << "Ingrese frase: ";
    getline(cin, texto);
    contarVocales(texto);
    return 0;
}
