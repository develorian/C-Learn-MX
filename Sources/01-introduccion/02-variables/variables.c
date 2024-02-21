#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Juan"; // cadena de caracteres.
    int characterAge = 65;         // variable del tipo entero.
    printf("Había una vez un hombre llamado %s\n", characterName);
    printf("el tenía %d años de edad\n", characterAge);

    characterAge = 35; // modificación de la variable
    printf("A el realmente le encantaba su nombre %s\n", characterName);
    printf("Pero no le gustaba tener %d años\n", characterAge);
    return 0;
}