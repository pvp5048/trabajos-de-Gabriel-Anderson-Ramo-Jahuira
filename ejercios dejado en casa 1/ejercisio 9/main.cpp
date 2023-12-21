//9.	Escriba un programa que te permita hallar el volumen de un circulo.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int opcion;
  double radio, altura, volumen;
  cout << "¿Que figura quieres calcular?" << endl;
  cout << "1. Esfera" << endl;
  cout << "2. Cilindro" << endl;
  cout << "Ingresa tu opción: ";
  cin >> opcion;
  if (opcion == 1) {
    cout << "Ingresa el valor del radio de la esfera: ";
    cin >> radio;
    volumen = 4.0 / 3.0 * M_PI * pow(radio, 3);
    cout << "El volumen de la esfera es: " << volumen << endl;
  } else if (opcion == 2) {
    cout << "Ingresa el valor del radio de la base del cilindro: ";
    cin >> radio;
    cout << "Ingresa el valor de la altura del cilindro: ";
    cin >> altura;
    volumen = M_PI * pow(radio, 2) * altura;
    cout << "El volumen del cilindro es: " << volumen << endl;
  }
  return 0;
}


