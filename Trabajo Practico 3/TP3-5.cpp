/*5. Hacer un programa en C++ para registrar los datos de tres libros como: t�tulo, autor, a�o y color del libro. El 
color se deber� hacer mediante una enumeraci�n y s�lo habr� rojo, verde y azul.
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

enum Color{ rojo,verde,azul};

struct Libro{
 char titulo[20],autor[20];
 int anio;
 Color colorlibro;
};


int main(){
 Libro libro[3];
 for(int i = 0; i < 3; i++){
  cout <<"Titulo libro " <<i+1 <<endl;
  cin.getline(libro[i].titulo,20);
  cout <<"Autor libro " <<i+1 <<endl;
  cin.getline(libro[i].autor,20);
  cout <<"A�o libro " <<i+1 <<endl;
  cin >> libro[i].anio;
  cin.ignore();
 }
 libro[0].colorlibro = azul;
 libro[1].colorlibro = rojo;
 libro[2].colorlibro = azul;



 for(int i = 0; i < 3; i++){
  cout <<"  Titulo: " <<libro[i].titulo ;
  cout <<"  Autor: " <<libro[i].autor ;
  cout <<"  A�o: " <<libro[i].anio ;
  
  switch(libro[i].colorlibro){
   case rojo: 
    cout <<"  Color: Rojo" <<endl; break;
   case verde:
    cout <<"  Color: Verde" <<endl; break;
   case azul:
    cout <<"  Color: Azul" <<endl; break;
  }
 }
 return 0;
}
