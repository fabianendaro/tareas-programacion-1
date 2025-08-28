// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista 
// Carnet: 10929202 L.P. 
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 25/08/2025 
// Número de ejercicio: 7 
#include <iostream>
#include <cctype> 
using namespace std;
main (){
    char  letra;
    cout << "Ingrese una letra cualquiera: ";
    cin >> letra;
    if(!isalpha(letra))
    {
    cout << "Ingreso caracter especial, prueba con una letra";
    }
    else if  (letra == 'a' || letra =='e' || letra=='i' || letra=='o' || letra=='u')
    {
        cout<<"Ingreso una vocal";
    }
    else if  (letra == 'A' || letra =='E' || letra=='I' || letra=='O' || letra=='U')
    {
        cout<<"Ingreso una vocal"; 
    }
    else
    {
        cout<<"Ingreso una consonante";
    }
    return 0;

}
