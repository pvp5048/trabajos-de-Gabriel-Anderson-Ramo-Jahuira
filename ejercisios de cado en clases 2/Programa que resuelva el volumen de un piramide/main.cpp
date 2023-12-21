//Programa que resuelva el volumen de la piramide cuadringular
#include <cmath>
#include <iostream>
using namespace std;

int main()
 {
   double lado,altura,area,volumen;


  cout << "Ingrese la altura de la piramide: "<<endl;
  cin >> altura;
  cout << "Ingrese el lado de la base de la piramide: "<<endl;
  cin >> lado;
   area=lado*lado;
  volumen = (area*altura)/3;

  cout << "El volumen de la piramide es: " << volumen << endl;

  return 0;
}
