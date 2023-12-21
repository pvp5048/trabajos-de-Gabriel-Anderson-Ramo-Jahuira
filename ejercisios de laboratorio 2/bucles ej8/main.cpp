/*8 Escribir un programa que muestre la sumatoria de todos los números entre el 0 y el 100.*/
#include <iostream>
using namespace std;

int main() {
  int suma = 0;
  for(int i = 0; i <= 100; i++) {
    suma += i;
  }

  cout << "La sumatoria de los números entre 0 y 100 es: " << suma<<endl;

  return 0;
}
