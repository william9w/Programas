/*
Instituto Tecnologico de Tijuana Depto de Sistemas y Computación 
Ing. En Sistemas Computacionales 
Practica enlenguaje c++ para la materia de lengiterfaz:

Ejercicio 59: Valor absoluto.

Autor :Mendoza Perez Max William
max.mendoza201@tectijuana.edu.mx
Repositorio:https://github.com/william9w/interfaz

*/
#include <cmath> // Libreria para calcular el valor absoluto de un numero
#include <iostream>

using namespace std;

int main() {
  float valor;
  cout << "Ingrese un numero: ";
  cin >> valor;
  float valorAb = abs(valor);
  cout << "El valor absoluto es " << valorAb;
}