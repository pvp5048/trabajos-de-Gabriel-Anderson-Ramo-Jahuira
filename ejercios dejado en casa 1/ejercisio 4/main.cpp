//4.	Escriba un código para resolver la división de dos números.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1,num2;
    int modulo,division;
   cout<<"El valor de num1 es:"<<endl;
   cin>>num1;
   cout<<"El valor de num2 es:"<<endl;
   cin>>num2;
   //division
        division=num1/num2;
        cout<<"la division es:"<<division<<endl;
   //modulo
        modulo=num1%num2;
        cout<<"el modulo es:"<<modulo<<endl;

       return 0;

}
