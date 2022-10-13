#include <stdio.h>
int main ()
{
    int i, j, n, k;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (k=n; k>=i; k--)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            if (i== 1 || j == 1 || i == n || j==(i*2) )
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
