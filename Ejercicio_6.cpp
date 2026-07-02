#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    if (numero % 3 == 0 && numero % 5 == 0) {
        cout << "El numero es multiplo de 3 y de 5." << endl;
    } else {
        cout << "El numero NO cumple ambas condiciones." << endl;
    }
    return 0;
}