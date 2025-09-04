// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 04/09/2025 
// Número de ejercicio: 18
#include <iostream>
using namespace std;
int main() {
    //Contadr de primos
    int contador = 0;   
    int numero = 2;     
    cout << "Los primeros 100 numeros primos son:" << endl;
    while (contador <= 100) {
        bool primo = true;   
        if (numero <= 1) {
            primo = false;
        } 
        else {
            //calculamos si el numero tiene divisores
            for (int i = 2; i * i <= numero; i++) {
                if (numero % i == 0) {
                    primo = false;
                    break; 
                }
            }
        }
        if (primo) {
            cout << numero <<" ";
            contador++;
        }
        numero++;
    }
    cout << endl;
    return 0;
}