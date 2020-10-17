/*
Instituto Tecnologico de Tijuana Depto de Sistemas y Computación 
Ing. En Sistemas Computacionales 
Practica enlenguaje c++ para la materia de lengiterfaz:

Ejercicio 57: Encontrar el promedio de N numeros. Insertar en primer lugar el valor de N, Seguido por los N numeros.

Autor :Mendoza Perez Max William
max.mendoza201@tectijuana.edu.mx
Repositorio:https://github.com/william9w/interfaz

*/
 #include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int num=1,cont=0;
   float suma=0;
   
   while(num!=0)
   {
     cout<<"Introduzca un numero: "<<endl;
     cin>>num;
     suma=suma+num; 
     if(num!=0)
     {
         cont=cont+1;     
              
              }          
                
                }
                
                cout<<"El promedio es: "<<suma/cont<<endl;
    
    system("");
    return EXIT_SUCCESS;
}