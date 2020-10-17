/*
Instituto Tecnologico de Tijuana Depto de Sistemas y Computación 
Ing. En Sistemas Computacionales 
Practica enlenguaje c++ para la materia de lengiterfaz:

Ejercicio 58: Invertir un Numero.

Autor :Mendoza Perez Max William
max.mendoza201@tectijuana.edu.mx
Repositorio:https://github.com/william9w/interfaz
*/
#include<iostream>
using namespace std;
int main() {
    int num, resto, numInv = 0;

    cout << "Ingrese numero" << endl;
    cin >> num;
    while (num > 0) {
        resto = num % 10;
        num = num / 10;
        numInv = numInv * 10 + resto;
    }
    cout << "El numero invertido es :" << numInv;
    return 0;
}