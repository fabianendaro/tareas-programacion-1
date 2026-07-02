#include <iostream>
using namespace std;

int main() {
    float l1, l2, l3, l4, perimetro;
    cout << "Ingrese los 4 lados del trapezoide: " << endl;
    cin >> l1 >> l2 >> l3 >> l4;
    
    perimetro = l1 + l2 + l3 + l4;
    
    cout << "El perimetro es: " << perimetro << endl;
    return 0;
}