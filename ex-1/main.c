#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Choisissez un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre > 42)
    {
        printf("%d est supérieur à 42\n", nombre);
    }
    else if (nombre == 42)
    {
        printf("%d est égal à 42\n", nombre);
    }
    else
    {
        printf("%d est inférieur à 42\n", nombre);
    }

    return 0;
}
