#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
    char cadena[200];

    cout << "Introduce una cadena: ";
    cin.getline(cadena, 200);

    int longitud = strlen(cadena);

    cout << "La longitud de la cadena es: " << longitud << endl;

    getch();
    return 0;
}
