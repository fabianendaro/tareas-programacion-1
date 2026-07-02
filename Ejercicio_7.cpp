#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese los tres lados: " << endl;
    cin >> a >> b >> c;
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Los lados SI pueden conformar un triangulo." << endl;
    } else {
        cout << "Los lados NO pueden conformar un triangulo." << endl;
    }
    return 0;
}