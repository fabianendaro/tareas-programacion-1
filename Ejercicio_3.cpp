#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa, area, perimetro;
    cout << "Ingrese el primer cateto (base): ";
    cin >> cateto1;
    cout << "Ingrese el segundo cateto (altura): ";
    cin >> cateto2;
    
    area = (cateto1 * cateto2) / 2;
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
    perimetro = cateto1 + cateto2 + hipotenusa;
    
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << endl;
    return 0;
}