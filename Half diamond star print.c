#include <stdio.h>
int main ()
{
    int i, j, n, k, m;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (k=n; k>=i; k--)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (i=1; i<=n-1; i++)
    {
        for (m=1; m<=i+1; m++)
        {
            printf(" ");
        }

        for (j=n-1; j>=i; j--)
        {
            printf("*");

        }

        printf("\n");
    }



    return 0;
}
