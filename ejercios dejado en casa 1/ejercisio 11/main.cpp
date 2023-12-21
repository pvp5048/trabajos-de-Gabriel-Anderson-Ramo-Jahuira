//12.	Escriba un programa que te permita determinar la cantidad de años, meses y días de una persona en razón a su fecha de nacimiento.
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

   cout << "Su edad es: " << edadAnios << " años, " << edadMeses << " meses y " << edadDias << " días." << std::endl;

    return 0;
}
