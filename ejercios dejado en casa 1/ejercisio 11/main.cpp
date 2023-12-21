//12.	Escriba un programa que te permita determinar la cantidad de a�os, meses y d�as de una persona en raz�n a su fecha de nacimiento.
#include <iostream>
#include <ctime>
using namespace  std;
int main()
{
    int diaNac, mesNac, anioNac;
    cout << "Ingrese su fecha de nacimiento (dd mm aaaa): "<<endl;
    cin >> diaNac >> mesNac >> anioNac;

    time_t t = time(0);
    struct tm* ahora = localtime(&t);

    int diaAct = ahora->tm_mday;
    int mesAct = ahora->tm_mon + 1;
    int anioAct = ahora->tm_year + 1900;

    int edadAnios = anioAct - anioNac;
    int edadMeses = mesAct - mesNac;
    int edadDias = diaAct - diaNac;

    if (edadDias < 0) {
        edadDias += 30;
        edadMeses--;
    }

    if (edadMeses < 0) {
        edadMeses += 12;
        edadAnios--;
    }

   cout << "Su edad es: " << edadAnios << " a�os, " << edadMeses << " meses y " << edadDias << " d�as." << std::endl;

    return 0;
}
