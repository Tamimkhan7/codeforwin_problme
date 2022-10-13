#include <stdio.h>
int main ()
{
    int j, i, n;

    scanf("%d", &n);
    printf("\n\n");

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if (j==1 || j == i || i==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
