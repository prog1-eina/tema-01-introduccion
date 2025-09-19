/******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 15 de septiembre de 2022
 * Resumen: Programa que solicita un número entero al usuario y lo escribe en 
 *          pantalla.
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que solicita un número entero al usuario y lo escribe en pantalla.
 */
int main() {
    cout << "Escriba un entero: ";
    
    int numero;
    cin >> numero;
    
    cout << "El entero escrito es el " << numero << endl;
}
