#include <stdio.h>

int main(void)
{
    int n;

    printf("Saisissez un nombre different de 0 : ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Le nombre doit etre different de 0.\n");
        return 0;
    }

    if (n > 0)
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

    return 0;
}
