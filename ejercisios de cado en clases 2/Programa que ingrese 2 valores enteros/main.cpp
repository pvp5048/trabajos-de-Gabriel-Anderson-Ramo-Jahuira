//Programa que ingrese 2 valores enteros, luego
//devuelva la suma, resta, multiplicación, división y módulo
#include <iostream>

using namespace std;

int main()
{
    int   suma, resta, multiplicacion, division, modulo;
    int   num1,num2;

   cout<<"El valor de num1 es:"<<endl;
   cin>>num1;
   cout<<"El valor de num2 es:"<<endl;
   cin>>num2;
   //suma
       suma=num1+num2;
        cout<<"la suma es:"<<suma<<endl;
   //resta
       resta=num1-num2;
        cout<<"la resta es:"<<resta<<endl;
   //multiplicacion
        multiplicacion=num1*num2;
        cout<<"la multipliacion es:"<<multiplicacion<<endl;
   //division
        division=num1/num2;
        cout<<"la division es:"<<division<<endl;
   //modulo
        modulo=num1%num2;
        cout<<"el modulo es:"<<modulo<<endl;

       return 0;
}
