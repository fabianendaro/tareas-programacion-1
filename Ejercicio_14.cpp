#include <iostream>
using namespace std;

int main() {
    int totalSegundos, horas, minutos, segundos;
    cout << "Ingrese los segundos: ";
    cin >> totalSegundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    cout << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;
    return 0;
}