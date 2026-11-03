#include <stdio.h>

int main(void)
{
    char symbol;

    printf("Choisissez un signe d'opération (+, -, /, *, %%) : ");
    scanf("%c", &symbol);

    if (symbol == '+')
    {
        printf("C'est une addition\n");
    }
    else if (symbol == '-')
    {
        printf("C'est une soustraction\n");
    }
    else if (symbol == '*')
    {
        printf("C'est une multiplication\n");
    }
    else if (symbol == '/')
    {
        printf("C'est une division\n");
    }
    else if (symbol == '%')
    {
        printf("C'est un modulo\n");
    }
    else
    {
        printf("Cette opération n'existe pas\n");
    }

    return 0;
}
