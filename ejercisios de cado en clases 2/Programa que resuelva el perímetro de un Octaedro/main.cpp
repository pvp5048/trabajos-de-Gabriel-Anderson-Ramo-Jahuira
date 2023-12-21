//Programa que resuelva el perímetro de un Octaedro
#include <iostream>

using namespace std;

int main()
{
    float perimetro,arista;
    cout<<"Ingrese la arista del octaedro: "<<endl;
    cin>> arista;
    perimetro=12*(arista);
    cout<<"el perimetro del octaedro regular es:"<<perimetro<<endl;
    return 0;
}
