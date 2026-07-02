#include <iostream>
#include <cmath> // Necesaria para pow()
using namespace std;

int main() {
    float capital, tasa, tiempo, montoFinal, interesCompuesto;
    cout << "Ingrese el capital inicial: ";
    cin >> capital;
    cout << "Ingrese la tasa de interes anual (en decimal, ej: 0.05): ";
    cin >> tasa;
    cout << "Ingrese el tiempo (en anos): ";
    cin >> tiempo;
    
    montoFinal = capital * pow((1 + tasa), tiempo);
    interesCompuesto = montoFinal - capital;
    
    cout << "El monto final con intereses es: " << montoFinal << endl;
    cout << "El interes compuesto ganado es: " << interesCompuesto << endl;
    return 0;
}