//Programa que resuelva el volumen de un cubo
#include <cmath>
#include <iostream>
using namespace std;

int main()
 {
   double altura,area,lado,volumen;

    cout << "Ingrese la altura del cubo: "<<endl;
  cin >> altura;
  cout<<"ingrese el lado del cubo"<<endl;
   cin>>lado;
  area=lado*lado;
  volumen = area*altura;

  cout << "El volumen del cubo es: " << volumen << endl;

  return 0;
}
