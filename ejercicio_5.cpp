//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numA, numB, mayor, menor;

    cout << "Ingrese 2 numeros numero" << endl;
    cin >> numA;
    cin >> numB;

    if(numA > numB){
        mayor = numA;
        menor = numB;
    }
    else
    {
        mayor = numB;
        menor = numA;
    }

    while(menor <= mayor){
        cout << menor << endl;
        menor++;
    }

	return 0;
}
