// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 4
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); // Inicializa la semilla aleatoria con la hora actual
    
    int p = rand() % (51); // Genera un número aleatorio entre 0 y 50
    
    int intentos = 1, prueba = -1;
    int minimo = 0, maximo = 50;
    
    while(prueba != p && intentos <= 5){
        cout << "Estoy pensando en un numero entre: " << minimo << " y " << maximo << endl;
        cout << "Intento " << intentos << ": " << endl;
        
        cin >> prueba;
        
        if(prueba == p){
            cout << "Felicidades, ganaste" << endl;
        } else if (prueba < p){
            minimo = prueba;
            cout << "Numero equivocado" << endl;
        } else if (prueba > p){
            maximo = prueba;
            cout << "Numero equivocado" << endl;
        }
        
        intentos++;
    }
    
    if(prueba != p){
        cout << "Perdiste el juego" << endl;
    }
    

    return 0;
}
