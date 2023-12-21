/*13.	Escriba un programa que te permita determinar en qué etapa de la vida está
en razón a su fecha de nacimiento de acuerdo a la gráfica:*/
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Obtener el año actual
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int anioActual = timePtr->tm_year + 1900;

    // Solicitar el año de nacimiento al usuario
    int anioNacimiento;
    cout << "Por favor, ingresa tu año de nacimiento: "<<endl;
    cin >> anioNacimiento;

    // Calcular la edad del usuario
    int edad = anioActual - anioNacimiento;

    // Determinar la etapa de la vida
    if (edad <= 0)
    {
        cout << "Fase prenatal."<<endl;
    }
    else if (edad<=6)
    {
        cout<<"estas en la fase de la infancia,"<<endl;
    }
    else if (edad <= 12)
    {
        cout << "estas en la fase de la ninies."<<endl;
    }
    else if (edad <= 20)
    {
        cout << "esta en la fase de la adolecencia."<<endl;
    }
    else if (edad<=25)
    {
        cout<<"esta en la fase de la juventud."<<endl;
    }

    else if (edad <= 60)
    {
        cout << "Estas en la fase de la adultes."<<endl;
    }
    else
    {
        cout << "Eres un adulto mayor."<<endl;
    }

    return 0;
}
