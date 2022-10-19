/* Declare una estructura llamada struct DiscoCompacto, que guarde el título, artista, numero de canciones, 
precio, año de lanzamiento. Use typedef para declarar el alias del struct como CD. 
Declare 3 variables de tipo DiscoCompacto, dos globales y una local al main.
Iterar usando strlen para mostrar el nombre de cada artista, solo si la longitud del artista, si es mayor a 10 
letras. Luego compare si dos títulos son del mismo artista
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;


struct DiscoCompacto
{ int edad;
char titulo[20];
char artista[20];
int canciones ;
float precio ;
int ano;
}a1,a2;
typedef struct DiscoCompacto cd;
int main()
{ 
cd a3;
cout << "ingrese el titulo a1 "<<endl;
cin>>a1.titulo; 
cout << "ingrese el artista"<<endl;
cin>>a1.artista;
cout << "Numeros de canciones"<<endl;
cin>>a1.canciones;
cout << "precio"<<endl;
cin>>a1.precio; //leemos individualmente cada campo
cout << "ingrese el año"<<endl;
cin>>a1.ano;

cout << "ingrese el titulo a2 "<<endl;
cin>>a2.titulo; //leemos individualmente cada campo
cout << "ingrese el artista"<<endl;
cin>>a2.artista;
cout << "Numeros de canciones"<<endl;
cin>>a2.canciones;
cout << "precio"<<endl;
cin>>a2.precio; //leemos individualmente cada campo
cout << "ingrese el año"<<endl;
cin>>a2.ano;

cout << "ingrese el titulo a1 "<<endl;
cin>>a3.titulo; //leemos individualmente cada campo
cout << "ingrese el artista"<<endl;
cin>>a3.artista;
cout << "Numeros de canciones"<<endl;
cin>>a3.canciones;
cout << "precio"<<endl;
cin>>a3.precio; //leemos individualmente cada campo
cout << "ingrese el año"<<endl;
cin>>a3.ano;


cout<< "CD 1: "<< a1.titulo <<" "<<a1.artista<<" "<<a1.canciones<<" "<<a1.precio<<" "<<a1.ano<<" "<<endl;
cout<< "-----------------------------------------------------------------------------------\n";
cout<< "CD 2: "<< a2.titulo<<" "<<a2.artista<<" "<<a2.canciones<<" "<<a2.precio<<" "<<a2.ano<<" "<<endl;
cout<< "-----------------------------------------------------------------------------------\n";
cout<< "CD 3: "<< a3.titulo <<" "<<a3.artista<<" "<<a3.canciones<<" "<<a3.precio<<" "<<a3.ano<<" "<<endl;
cout<< "----------------------------------------------------------------------------------- \n";

return 0;
}
