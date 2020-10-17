/*
Instituto Tecnologico de Tijuana Depto de Sistemas y Computación 
Ing. En Sistemas Computacionales 
Practica enlenguaje c++ para la materia de lengiterfaz:

Ejercicio 60:Calcular el Valor absoluto.

Autor :Mendoza Perez Max William
max.mendoza201@tectijuana.edu.mx
Repositorio:https://github.com/william9w/interfaz
*/
#include <cmath> // Libreria para calcular el valor absoluto de un numero
#include <iostream>

using namespace std;

int main() {
  float valor=-6, valor1=0, valor2=25, valor3=-143, valor4=-42;
  float valorAb1 = abs(valor);
  float valorAb2 = abs(valor1);
  float valorAb3 = abs(valor2);
  float valorAb4 = abs(valor3);
  float valorAb5 = abs(valor4);
  cout << " El valor absoluto de -6   es  " << valorAb1<< "\n ";
  cout << "El valor absoluto de 0    es  " << valorAb2<< "\n ";
  cout << "El valor absoluto de 25   es  " << valorAb3<< "\n ";
  cout << "El valor absoluto de -143 es  " << valorAb4<< "\n ";
  cout << "El valor absoluto de -42  es  " << valorAb5<< "\n ";
}
