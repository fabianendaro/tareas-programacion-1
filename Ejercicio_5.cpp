#include <iostream>
using namespace std;

int main() {
    float capital, tasa, tiempo, interes;
    cout << "Ingrese el capital inicial: ";
    cin >> capital;
    cout << "Ingrese la tasa de interes (en decimal, ej: 0.05): ";
    cin >> tasa;
    cout << "Ingrese el tiempo (en periodos): ";
    cin >> tiempo;
    
    interes = capital * tasa * tiempo;
    
    cout << "El interes simple generado es: " << interes << endl;
    return 0;
}