#include <stdio.h>
#include <stdlib.h>

/*
Crea una tabla de comparación de temperaturas de -20 a 300 grados Farenheit a Celsius.
Utiliando el bucle for.
Y declarando solo una variable int fahr.
para el ciclo o bucle for no es necesario utilizar { }, despues de la condicion for(). Aunque también se pueden poner y no afecta al programa.
*/

int main()
{
    /*Declaración de variables*/
    int fahr;

    /* Encabezado de la tabla. */
    printf("\n\tTabla de conversión \n\tde grados °F a C°\n\n");
    printf("\t===================");
    printf("\n\tFAHR\tCELSIUS\n");
    printf("\t===================\n");

    /*
    Ciclo For:
    */
    for (fahr = -40; fahr <= 300; fahr += 20)                              /* Se inicializa la variable fahr en cero; se hace la declaración de bucle para fahr mientras sera menor o igual que 300, debe ir aumentando =+ mas 20. */
        printf("\t%3d °F\t%3.1f °C\n", fahr, (5.0 / 9.0) * (fahr - 32.0)); /* Imprime los valores indicados en el ciclo for. */

    /*
    Cierre de la tabla.
    */
    printf("\t===================\n");
    getchar(); /* Queda en espera de un caracter introducido por el usuario para que no cierre el programa. */
    return 0;
}