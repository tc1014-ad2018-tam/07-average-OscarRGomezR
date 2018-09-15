/*
 * Este programa permitira ingresar al usuario una serie
 * de números y asi sacar el promedio de dicha serie.
 * El programa aceptara cualquier número que el usuario ingrese,
 * sin embargo dejara de aceptar números cuando el usuario ingrese
 * un "0".
 * Nombre: Óscar Rubén Gómez Ríos
 * Fecha: 07 de Septiembre del 2018
 * Correo: A01411750@itesm.mx
 */
#include <stdio.h>

int main() {
    int sum = 0;
    int counter = 0;
    int n;
    int average;
    int a;

printf("Give me a sequence of numbers please (zero is the end of the cycle)\n" );

    do
    {
        scanf("%i", &n);
        sum = sum + n;
        counter++;
    }

    while (n != 0);

    t = counter -1;
    average = sum / a;

printf("Numbers entered:%\n", a);

return 0;
}
