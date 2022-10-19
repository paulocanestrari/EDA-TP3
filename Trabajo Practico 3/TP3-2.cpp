/* 2. Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos 
valores (fuera del main): Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 
15hs. Luego en el main, muestre ambos profesores concatenados a sus materias. Sugerencia getline para los 
char[].
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;


struct Profesor
{ 
char nombre[20];
char cargo[20];
char materia[20];
int cargahoraria;

};
struct Profesor P1 ={"Cristina","Titular","Gestion de datos", 20 };
struct Profesor P2 ={"Fabiana","Jefa TP","Matematica", 15 };

int main()
{ 


cout<< "Profesor : "<< P1.nombre <<" "<<P1.materia<<endl;
cout<< "-----------------------------------------------------------------------------------\n";
cout<< "Profesor : "<< P2.nombre <<" "<<P2.materia<<endl;


return 0;
}
