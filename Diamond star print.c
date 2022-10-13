#include <stdio.h>
int main ()
{
    int i, j, k, n;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (k=n; k>=i; k--)
        {
            printf(" ");
        }
        for (j=1; j<i; j++)
        {
            printf("*");
        }
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (i=1; i<=n-1; i++)
    {
        for (k=1; k<=i+1; k++)
        {
            printf(" ");
        }
        for (j=n-1; j>i; j--)
        {
            printf("*");
        }
        for (j=n-1; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");

    }


    return 0;
}
