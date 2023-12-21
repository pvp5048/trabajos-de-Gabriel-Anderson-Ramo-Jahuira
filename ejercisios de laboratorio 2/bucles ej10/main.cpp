/*Escribir un programa que permita al usuario ingresar 6 números enteros, que pueden ser positivos
o negativos. Al finalizar, mostrar la sumatoria de los números negativos y el promedio de los positivos.
No olvides que no es posible dividir por cero, por lo que es necesario evitar
que el programa arroje un error si no se ingresaron números positivos.*/
#include <iostream>
using namespace std;

int main()
{
  int numeros[6];
  int sumaNegativos = 0;
  int cantidadPositivos = 0;
  double sumaPositivos = 0.0;

  for(int i = 0; i < 6; i++)
    {
    cout << "Ingresa un numero entero: "<<endl;
    cin >> numeros[i];

    if(numeros[i] < 0)
    {
      sumaNegativos += numeros[i];
    }
    else if (numeros[i] > 0)
    {
      sumaPositivos += numeros[i];
      cantidadPositivos++;
    }
   }

  double promedioPositivos;

  if(cantidadPositivos != 0)
  {
    promedioPositivos = sumaPositivos / cantidadPositivos;
  }
  else
  {
    promedioPositivos = 0;
  }

  cout << "Sumatoria de negativos: " << sumaNegativos<<endl;
  cout << "Promedio de positivos: " << promedioPositivos<<endl;

  return 0;
}


