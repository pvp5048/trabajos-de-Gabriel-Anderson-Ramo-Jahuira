//Programa que resuelva el volumen de un cilindro
#include <cmath>
#include <iostream>
using namespace std;

int main()
 {
   double radio,altura,area,volumen;

  cout << "Ingrese el radio del cilindro: "<<endl;
  cin >> radio;
  cout << "Ingrese la altura del cilindro: "<<endl;
  cin >> altura;

   area= M_PI * pow(radio, 2);
  volumen = area*altura;

  cout << "El volumen del cilindro es: " << volumen << endl;

  return 0;
}
