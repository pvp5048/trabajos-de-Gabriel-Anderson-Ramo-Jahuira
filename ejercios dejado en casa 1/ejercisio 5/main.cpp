//4.	Determinar el promedio de las edades de 5 compañeros de tu salón.
#include <iostream>

using namespace std;

int main()
{
     float edad1,edad2,edad3,edad4,edad5,promedio;
   cout<<"El valor de la primera edad  es:"<<endl;
   cin>>edad1;
   cout<<"El valor de la segunda edad  es:"<<endl;
   cin>>edad2;
   cout<<"El valor de la tercera  edad  es:"<<endl;
   cin>>edad3;
   cout<<"El valor de la cuarta edad  es:"<<endl;
   cin>>edad4;
   cout<<"El valor de la quinta edad  es:"<<endl;
   cin>>edad5;
   promedio=(edad1+edad2+edad3+edad4+edad5)/5;
   cout<<"El promedio de las 5 edades es:"<<promedio<<endl;

    return 0;
}
