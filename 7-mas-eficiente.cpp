/******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 15 de septiembre de 2022
 * Resumen: Ejemplo de un programa algo más eficiente: calcula la suma de los
 *          números entre dos límites especificados por el usuario, escribiendo
 *          el resultado en pantalla.
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que escribe en la pantalla la suma de los enteros comprendidos en
 * el intervalo un intervalo solicitado al usuario.
 */
int main() {
    cout << "Escriba el valor inicial y final de un intervalo entero: ";
    int inicio, fin;
    cin >> inicio >> fin;

    int resultado = (inicio + fin) * (fin - inicio + 1) / 2;
    
    cout << "La suma de los enteros comprendidos en el intervalo [" << inicio 
         << ", " << fin << "] es: " << resultado << endl;
}
