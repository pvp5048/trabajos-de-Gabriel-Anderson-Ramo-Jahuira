//8.	Escriba un programa que te permita hallar el área de un circulo.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     double radio,area;

        cout<<"el radio es:"<<endl;
        cin>>radio;
        area=M_PI * pow(radio, 2);
        cout<<"El area es:"<<area<<endl;
    return 0;
}
