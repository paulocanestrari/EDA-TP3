/*4.Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. Se guarda 
de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura 
que guarda una persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;


struct Fechas
{ 
int dia;
int mes;
int anio;
};

struct Persona
{ 
string nombre;
int edad ;
int  peso;
Fechas Fecha;

};

struct Trabajador
{ 
Persona Per ;

double salario;

};

int main()
{ 
struct Trabajador t;
 t.Per.nombre ="Tomas Lopez";
 t.Per.edad =37;
 t.Per.peso =83;
t.Per.Fecha.dia=7;
   t.Per.Fecha.mes=6;
    t.Per.Fecha.anio=1985;
	t.salario=150000;

cout<< t.Per.nombre <<" Edad: "<< t.Per.edad  <<" Peso : "<< t.Per.peso<<" Fecha: "<< t.Per.Fecha.dia  <<"."<< t.Per.Fecha.mes  <<"."<< t.Per.Fecha.anio  <<" Salario: " << t.salario <<endl;
cout<< "-----------------------------------------------------------------------------------\n";



return 0;
}
