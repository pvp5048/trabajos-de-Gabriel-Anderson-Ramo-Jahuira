//volumen de una Esfera
#include <cmath>
#include <iostream>
using namespace std;

int main() {
   double radio, volumen;

  cout << "Ingrese el radio de la esfera: "<<endl;
  cin >> radio;

  volumen = (4.0/3.0) * M_PI * pow(radio, 3);

  cout << "El volumen de la esfera es: " << volumen << endl;

  return 0;
}
