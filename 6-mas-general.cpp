/******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 15 de septiembre de 2022
 * Resumen: Ejemplo de un programa algo más general: calcula la suma de los
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

    int resultado = 0;
    for (int i = inicio; i <= fin; i++) {
        resultado = resultado + i;
    }
    cout << "La suma de los enteros comprendidos en el intervalo [" << inicio 
         << ", " << fin << "] es: " << resultado << endl;
}
