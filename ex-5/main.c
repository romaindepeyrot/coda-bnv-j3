#include <stdio.h>

int main(void)
{
    char symbole;
    int n;

    printf("Saisissez un symbole (+ ou -) : ");
    scanf(" %c", &symbole);

    printf("Saisissez un nombre different de 0 : ");
    scanf("%d", &n);

    if (symbole == '+')
    {
        // De 0 au nombre choisi
        if (n >= 0)
        {
            for (int i = 0; i <= n; i++)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            for (int i = 0; i >= n; i--)
            {
                printf("%d\n", i);
            }
        }
    }
    else if (symbole == '-')
    {
        // Du nombre choisi a 0
        if (n >= 0)
        {
            for (int i = n; i >= 0; i--)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            for (int i = n; i <= 0; i++)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("Le symbole n'est pas reconnu.\n");
    }

    return 0;
}
