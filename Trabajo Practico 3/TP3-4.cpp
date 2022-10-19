/*4.Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. Se guarda 
de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura 
que guarda una persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;


struct Fecha{
 int dia,mes,anio;
};

struct Persona{
 char nombre[20];
 int edad,peso;
 Fecha fecha;
}persona = {"Paulo",20,45,2,12,1985};

struct Empleado{
 Persona persona;
 int salario;
}trabajador = {"Alvaro",19,60,22,7,1998,180000};

int main(){
 cout <<"Persona: " <<persona.nombre;
 cout <<"\nEdad: " <<persona.edad;
 cout <<"\nPeso: " <<persona.peso;
 cout <<"\nDia nacimiento: " <<persona.fecha.dia;
 cout <<"\nMes nacimiento: " <<persona.fecha.mes;
 cout <<"\nAño nacimiento: " <<persona.fecha.anio;
 
 cout <<"\n\n----------Trabajador----------" <<endl;
 
 cout <<"\nTrabajador: " <<trabajador.persona.nombre;
 cout <<"\nEdad: " <<trabajador.persona.edad;
 cout <<"\nPeso: " <<trabajador.persona.peso;
 cout <<"\nDia nacimiento: " <<trabajador.persona.fecha.dia;
 cout <<"\nMes nacimiento: " <<trabajador.persona.fecha.mes;
 cout <<"\nAño nacimiento: " <<trabajador.persona.fecha.anio;
 cout <<"\nSalario: " <<trabajador.salario;
   
   return 0;
}
