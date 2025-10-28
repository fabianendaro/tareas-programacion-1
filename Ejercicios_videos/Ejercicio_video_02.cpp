#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
    char palabra[100];

    cout << "Introduce una palabra: ";
    cin.getline(palabra, 100);

    strupr(palabra);

    cout << "La palabra en mayusculas es: " << palabra << endl;

    getch();
    return 0;
}
