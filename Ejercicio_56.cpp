/*
Instituto Tecnologico de Tijuana Depto de Sistemas y Computación 
Ing. En Sistemas Computacionales 
Practica enlenguaje c++ para la materia de lengiterfaz:

Ejercicio 56: Se dispone de una lista que contiene los eamenes de grado finales 
para una clase de 20 alumnos. Contar las calificaciones abajo de 65 e imprimir este numero.

Autor :Mendoza Perez Max William
max.mendoza201@tectijuana.edu.mx
Repositorio:https://github.com/william9w/interfaz

*/
#include <cstdlib>
#include<iostream>
using namespace std;
int main(int arc, char * argv[]){
 float calificaciones[20], suma=0,aprobados, reprobados,rep=0;
 
 cout<<"Introducir las calificaciones de cada alumno"<<endl;
 for (int i=0; i<20; i++)
{
    cin>>calificaciones[i]; 
    if (calificaciones[i]>=65){

      aprobados=1;
      suma+=aprobados;
    }       
    else{
      reprobados = 1;
      rep+=reprobados;
    }

 }
 cout<<"Numero de calificaciones por debajo de 65 es igual:"<<endl;
 
 cout<<rep<<endl;
 return 0;
} 