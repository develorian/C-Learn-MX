/*
--------------------------------------------------
INFORMACIÓN DEL PROGRAMA:
--------------------------------------------------
Autor:      Develorian
Fecha:      21/feb/2024
Lenguaje:   C
IDE:        Visual Studio Code; Version 1.86.2 x64
SO:         Ubuntu 22.04.4 LTS x86_64
Kernel:     6.5.0-18-generic
--------------------------------------------------
*/

/* Inclusión de librerías*/
#include <stdio.h>
#include <stdlib.h>

/*
Crea una tabla de comparación de temperaturas de -20 a 300 grados Farenheit a Celsius.
Utiliando el bucle for y constantes simbólicas o nombres simbólicos, que permiten eliminar los números mágicos que utilizamos con el ciclo while, ya que estos aportan poca información al programador y son difíciles de cambiar semánticamente.
Y declarando solo una variable int fahr.
para el ciclo o bucle for no es necesario utilizar { }, despues de la condicion for(). Aunque también se pueden poner y no afecta al programa.
*/

/* Declaración de constantes simbólicas o nombres simbólicos */
#define LOWER -40 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* Función principal: main() */
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
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)                        /* Se inicializa la variable fahr en (-40 °F) menos cuarenta °F con la variable simbólica LOWER; se hace la declaración de bucle para fahr mientras sea menor o igual <=que la constante simbólica UPPER = 300 °F, debe ir aumentando =+ mas 40 declarado en la constante simbólica STEP. */
        printf("\t%3d °F\t%3.1f °C\n", fahr, (5.0 / 9.0) * (fahr - 32.0)); /* Imprime los valores indicados en el ciclo for. */

    /* Cierre de la tabla. */
    printf("\t===================\n");
    getchar(); /* Queda en espera de un caracter introducido por el usuario para que no cierre el programa. */
    return 0;
}

/* FIN DEL PROGRAMA =) */