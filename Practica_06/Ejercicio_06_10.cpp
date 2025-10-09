// Materia: Programación I, Paralelo 1
// Autor: Fabian Endara
// Fecha creación: 09/10/2025
// Número de ejercicio: 10
// Problema planteado: Eliminar todos los dígitos de una cadena

#include <iostream>
#include <string>
using namespace std;

string eliminarDigitos(string cadena) {
    string resultado = "";
    int i = 0;
    while (i < cadena.size()) {
        if (!(cadena[i] >= '0' && cadena[i] <= '9'))
            resultado += cadena[i];
        i++;
    }
    return resultado;
}

int main() {
    string texto;
    cout << "Ingrese cadena: ";
    getline(cin, texto);
    cout << "Resultado: " << eliminarDigitos(texto);
    return 0;
}
