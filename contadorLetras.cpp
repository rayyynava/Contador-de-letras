// Caracter.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char nombre[30];
    char letra;
    int numero = 0;
    
    /*nombre[0] = 'R'; 
    nombre[1] = 'a';
    nombre[2] = 'y';
    nombre[3] = 'm';
    nombre[4] = 'u';
    nombre[5] = 'n';
    nombre[6] = 'd';
    nombre[7] = 'o';
    */

    cout << "Escriba su nombre: ";
    cin.getline(nombre, 30, '\n');

    cout << "Ingrese letra a contar dentro del nombre:  \n" ;
    cin >> letra;

    for (int j = 0; j < strlen(nombre); j++) {
            if (nombre[j]== letra) {
                numero++;
            }

           
    }
    cout << letra <<   "   Encontradas " << numero ;


       return 0;

}