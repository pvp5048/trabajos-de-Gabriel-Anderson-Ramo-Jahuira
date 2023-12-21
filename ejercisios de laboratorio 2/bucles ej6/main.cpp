/*Solicitar al usuario que ingrese una frase y luego imprimir un listado
de las vocales que aparecen en esa frase (sin repetirlas).*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string frase;
  cout << "Ingrese una frase: ";
  getline(cin, frase);

  string vocales = "aeiou";

  for(int i = 0; i < frase.size(); i++) {
    char letra = tolower(frase[i]);
    if(vocales.find(letra) != string::npos &&
       frase.find_first_of(letra, i + 1) == string::npos) {
      cout << letra << " ";
    }
  }

  return 0;
}

