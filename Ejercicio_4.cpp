#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float lado, radio, apotema;
    cout << "Ingrese la longitud de un lado: ";
    cin >> lado;
    cout << "Ingrese el radio: ";
    cin >> radio;
    
    apotema = sqrt((radio * radio) - ((lado / 2) * (lado / 2)));
    
    cout << "El apotema es: " << apotema << endl;
    return 0;
}