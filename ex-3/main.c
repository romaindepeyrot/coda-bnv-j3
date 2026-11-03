#include <stdio.h>

int main(void)
{
    char mot[100];

    printf("Saisissez un mot : ");
    scanf("%99s", mot);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", mot);
    }

    return 0;
}
