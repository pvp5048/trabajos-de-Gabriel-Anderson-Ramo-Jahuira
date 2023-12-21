/*5 Escribir un programa que solicite al usuario una cantidad y luego itere la cantidad de veces dada. En cada iteración,
solicitar al usuario que ingrese un número. Al finalizar, mostrar la suma de todos los números ingresados.*/

#include <iostream>
using namespace std;

int main() {
  int cantidad, numero, suma = 0;

  cout << "¿Cuántos numeros quieres sumar? ";
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
