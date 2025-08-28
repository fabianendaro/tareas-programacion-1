// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 25/08/2025 
// Número de ejercicio: 3 
#include <iostream>
using namespace std;

int main() {
    float b, h, area; //Definimos a b, h y area como variables flotantes
    cout << "Ingrese la base del triangulo: ";
    cin >> b;
    cout << "Ingrese la altura del triangulo: ";
    cin >> h;
    area = (b * h) / 2; //Definimos el area con la formula del area de un triangulo = (b * h) / 2
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}