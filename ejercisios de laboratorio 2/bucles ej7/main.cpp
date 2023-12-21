/*7 Solicitar al usuario que ingrese una frase y luego imprimir la cantidad
de vocales que se encuentran en dicha frase.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string frase;
  int vocales = 0;

  cout << "Ingrese una frase: ";
  getline(cin, frase);

  for(int i = 0; i < frase.size(); i++) {
  char letra = tolower(frase[i]);
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      vocales++;
    }
  }

  cout << "La frase tiene " << vocales << " vocales."<<endl;

  return 0;
}
