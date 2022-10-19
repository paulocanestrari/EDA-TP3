/*3. Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la anterior. Llamada 
Empleado que guarda nombre, Dirección (de tipo 
infoDireccion), y salario. Declare un arreglo de 2 empleados, y 
cargue las estrcuturas Empleado desde el main
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;


struct infoDireccion
{ 
char calle [20];
char ciudad [20];
char provincia[20];

};

struct Empleado
{ 
char nombre [20];
struct infoDireccion Direccion;
double salario;

};

int main()
{ 
struct Empleado e[1];
int i;
for (i=0;i<=1;i++){

cout << "ingrese el nombre del empleado :"<<endl;
cin.getline(e[i].nombre, '\n'); 
cout << "ingrese el nombre de la calle :"<<endl;
cin.getline(e[i].Direccion.calle,'\n'); 
cout << "Nombre de la Ciudad :"<<endl;
cin.getline(e[i].Direccion.ciudad,'\n');
cout << "Nombre de la Provincia :"<<endl;
cin.getline(e[i].Direccion.provincia,'\n');
cout << "Salario :"<<endl;
cin>>e[i].salario;
cin.clear();
cin.ignore();
};
for (i=0;i<=1;i++){

cout<< e[i].nombre <<" "<< e[i].Direccion.calle <<" "<<e[i].salario<<endl;
cout<< "-----------------------------------------------------------------------------------\n";


}
return 0;
}
