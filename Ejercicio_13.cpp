#include <iostream>
using namespace std;

int main() {
    int horas, minutos, segundos, totalSegundos;
    cout << "Ingrese horas, minutos y segundos: ";
    cin >> horas >> minutos >> segundos;

    totalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    cout << totalSegundos << endl;
    return 0;
}