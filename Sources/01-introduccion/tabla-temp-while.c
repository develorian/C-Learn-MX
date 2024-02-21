#include <stdio.h>

/*
Se muestra una tabla de conversión de temperaturas de grados Farenheit a Celsius, de -40 a 300 °F.
Uilizando el ciclo while. Es necesario colocar {}, después de la condición while().
*/

int main()
{
    /*
    Delaración de variables, int y float.
    */
    int lower, upper, step;
    float fahr, celsius;

    /*
    Asignación de valores iniciales de las variables.
    */
    lower = -40;  /* Es el límite menor de la tabla de temperaturas. */
    upper = 300;  /* Es el límite mayor de la tabla de temperaturas. */
    step = 20;    /* Es la distancia entre temperaturas que se muestra en la tabla. */
    fahr = lower; /* Inicializamos el conteo de la temperatura en F° en lower = 0. */

    printf("\n\tTabla de conversión \n\tde grados °F a C°\n\n"); /* Encabezado de la tabla. */
    printf("\t===================");
    printf("\n\tFAHR\tCELSIUS\n");
    printf("\t===================\n");

    /*
    Ciclo While:
    */
    while (fahr <= upper) /* Mientras la variable sea menor o igual que la variable upper, se ejecuta lo siguiente: */
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);           /* Operación de conversión de F° a C°. */
        printf("\t%3.0f °F\t%3.1f °C\n", fahr, celsius); /* Imprime mientras se cumple la condición el valor de la variable fahr con 3 números enteros y ningún decimal la variable fahr y con tres enteros y un decimal la variable celsius, ambas variables del tipo float. */
        fahr = fahr + step;                              /* Aumenta el valor de la variable fahr con 20 más que es el valor de step, hasta que se cumpla la secuencia while. */
    }

    // Cierre de la tabla.
    printf("\t===================\n");
    getchar(); /* Queda en espera de un caracter introducido por el usuario para que no cierre el programa. */
    return 0;
}
