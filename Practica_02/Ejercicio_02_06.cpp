// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n){
    if(n <= 1) return false; 
    for(int i = 2; i * i <= n; i++){ 
        if(n % i == 0) return false; 
    }
    return true; 
}

int main(){
    srand(time(NULL)); // Inicializa la semilla aleatoria
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    int primos = 0, aleatorio;

    for(int i = 0; i < n; i++){
        aleatorio = rand() % (10001) + 1; // Genera un número aleatorio entre 1 y 10001
        bool p = esPrimo(aleatorio);
        if(p){
            cout << aleatorio << " es Primo" << endl;
            primos++;
        } else {
            cout << aleatorio << endl;
        }
    }
    cout << "Se han generado " << primos << " numeros primos" << endl;
    return 0;
}
