/*Requerir al usuario que ingrese un número entero positivo e imprimir todos los números
correlativos entre el ingresado por el usuario y uno menos del doble del mismo.*/
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"ingrese un numero entero positivo:"<<endl;
    cin>>num;

    int i = num+1;
    while(i < 2*num) {
        cout << i <<endl;
        i++;
    }

    return 0;
}
