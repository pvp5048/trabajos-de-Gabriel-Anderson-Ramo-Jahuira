//Programa que resuelva el volumen de un cono
#include <cmath>
#include <iostream>
using namespace std;

int main()
 {
   double radio,altura, volumen;

  cout << "Ingrese el radio del cono: "<<endl;
  cin >> radio;
  cout << "Ingrese la altura del cono: "<<endl;
  cin >> altura;


  volumen = (4.0/3.0) * M_PI * pow(radio, 2)*altura;

  cout << "El volumen del cono es: " << volumen << endl;

  return 0;
}
