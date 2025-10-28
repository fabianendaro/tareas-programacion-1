#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
    char cadena[200];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    cout << "Introduce una cadena: ";
    cin.getline(cadena, 200);

    for (int j = 0; j < strlen(cadena); j++) {
        switch (cadena[j]) {
            case 'a': case 'A': a++; break;
            case 'e': case 'E': e++; break;
            case 'i': case 'I': i++; break;
            case 'o': case 'O': o++; break;
            case 'u': case 'U': u++; break;
        }
    }

    cout << "\nNumero de ocurrencias de cada vocal:\n";
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;

    getch();
    return 0;
}
