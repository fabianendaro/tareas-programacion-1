#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Ingrese un anho: ";
    cin >> anio;
    
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El ano " << anio << " es bisiesto." << endl;
    } else {
        cout << "El ano " << anio << " NO es bisiesto." << endl;
    }
    return 0;
}