/*5 Escribir un programa que solicite al usuario una cantidad y luego itere la cantidad de veces dada. En cada iteraci�n,
solicitar al usuario que ingrese un n�mero. Al finalizar, mostrar la suma de todos los n�meros ingresados.*/

#include <iostream>
using namespace std;

int main() {
  int cantidad, numero, suma = 0;

  cout << "�Cu�ntos numeros quieres sumar? ";
  cin >> cantidad;

  for(int i = 0; i < cantidad; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> numero;
    suma += numero;
  }

  cout << "La suma total es: " << suma << endl;

  return 0;
}
