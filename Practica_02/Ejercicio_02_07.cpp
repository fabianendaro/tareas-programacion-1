// Materia: Programación I, Paralelo 4 
// Autor: Fabian Endara Baptista
// Carnet: 10929202 LP
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 08/09/2025 
// Ejercicio: 7
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int cantidad_ninos, x=1, aleatorio=0, contador=0, contador2=0, contador3=0, panales=0;
    cout<< "Ingrese el numero de ninos: ";
    cin>> cantidad_ninos;

    // Este while crea al azar la edad de los niños (pueden ser de 1, 2 o 3 años)
    while(x<=cantidad_ninos){
        aleatorio= (rand()%3)+1; // acá se genera un número random entre 1 y 3
        cout<< aleatorio<<" ";
        if(aleatorio==1){contador++;}
        else if(aleatorio==2){contador2++;}
        else if(aleatorio==3){contador3++;}
        x++;
    }

    cout<< endl;
    cout<< "La cantidad de ninos de 1 anio son: "<<contador<<endl;
    cout<< "La cantidad de ninos de 2 anio son: "<<contador2<<endl;
    cout<< "La cantidad de ninos de 3 anio son: "<<contador3<<endl;

    // acá hacemos la cuenta de cuántos pañales en total se necesitan
    panales= (contador*6) + (contador2*3) + (contador3*2);
    cout<< "La cantidad de panales diarios son: "<<panales<<endl;
    return 0;
}
