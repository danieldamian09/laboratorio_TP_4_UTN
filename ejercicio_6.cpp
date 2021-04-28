//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main()
{

    int num;
    int cont_pos = 0;
    int cont_neg = 0;

    cout << "Por favor ingrese un numero: " << endl;
    cin >> num;

    while(num != 0)
    {
        if(num > 0){
            cont_pos++;
        }
        else{
            cont_neg++;
        }

        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

    }


        cout << "Cantidad de positivo: " << cont_pos << endl;
        cout << "Cantidad de negativos: " << cont_neg << endl;



    return 0;
}
