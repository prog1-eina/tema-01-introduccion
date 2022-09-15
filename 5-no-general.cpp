/*******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 15 de septiembre de 2022
 * Resumen: Ejemplo de un programa poco general: calucla la suma de los números
 *          entre, exactamente, 1 y 100, escribiendo el resultado en pantalla.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que escribe en la pantalla la suma de los enteros comprendidos en el
 * intervalo [1, 100].
 */
int main() {
    int resultado = 0;
    for (int i = 1; i <= 100; i++) {
        resultado = resultado + i;
    }
    cout << "La suma de los enteros comprendidos en el intervalo [1, 100] es: "
         << resultado << endl;
}
