//6.	Escriba un código para resolver la siguiente formula

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double a, b, c;
  double x1, x2;

  cout << "Ingrese a: ";
  cin >> a;
  cout << "Ingrese b: ";
  cin >> b;
  cout << "Ingrese c: ";
  cin >> c;

  double discriminante = b*b - 4*a*c;

  if(discriminante > 0) {
    x1 = (-b + sqrt(discriminante)) / (2*a);
    x2 = (-b - sqrt(discriminante)) / (2*a);
    cout << "Solucion x1 = " << x1 << endl;
    cout << "Solucion x2 = " << x2 << endl;
  }

  else if(discriminante == 0) {
    x1 = -b / (2*a);
    cout << "Unica solucion: x = " << x1 << endl;
  }

  else {
    cout << "No tiene soluciones reales";
  }

  return 0;
}
