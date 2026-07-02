#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    switch (numero % 2) {
        case 0:
            cout << numero * numero << endl;
            break;
        case 1:
        case -1:
            cout << numero * numero * numero << endl;
            break;
    }
    return 0;
}