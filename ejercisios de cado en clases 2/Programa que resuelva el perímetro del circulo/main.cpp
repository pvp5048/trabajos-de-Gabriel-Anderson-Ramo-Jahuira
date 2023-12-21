//Programa que resuelva el perímetro del circulo
#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
   double radio,perimetro,diametro;

  cout << "Ingrese el radio del cilindro: "<<endl;
  cin >> radio;
  diametro=2*(radio);

   perimetro= M_PI*(diametro);
  cout << "El perimetro del circulo  es: " << perimetro << endl;

  return 0;
}
