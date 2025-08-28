#include <iostream>
using namespace std;

int main() {
   int numero; 
   cout<<"Ingrese un numero: ";
   cin>>numero;
   for(int fila=1;fila<=numero;fila++){
      for(int col=1;col<=fila;col++) cout<<"*";
      cout<<endl;
   }
return 0;
}
