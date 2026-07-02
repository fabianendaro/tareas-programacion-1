#include <iostream>
using namespace std;

int main() {
    float compra, venta, utilidad;
    cout << "Ingrese precio de compra y venta: ";
    cin >> compra >> venta;

    utilidad = venta - compra;

    if (utilidad > 0) {
        cout << "Ganancia" << endl;
    } else if (utilidad < 0) {
        cout << "Perdida" << endl;
    } else {
        cout << "Sin ganancia ni perdida" << endl;
    }
    return 0;
}