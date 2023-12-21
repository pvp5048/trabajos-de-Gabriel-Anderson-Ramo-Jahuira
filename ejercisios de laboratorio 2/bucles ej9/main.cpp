/*9 Escribir un programa que muestre la sumatoria
de todos los múltiplos de 3 encontrados entre el 0 y el 100.*/
#include <iostream>
using namespace std;

int main() {
  int suma = 0;

  for(int i = 0; i <= 100; i++)
  {
    if(i % 3 == 0)
    {
      suma += i;
    }
  }

  cout << "La sumatoria de los múltiplos de 3 entre 0 y 100 es: " << suma<<endl;

  return 0;
}
