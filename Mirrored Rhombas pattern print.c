#include <stdio.h>
int main ()
{
    int i, j,n, k;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (k=i; k<=n; k++)
        {
            printf(" ");
        }
        for (j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }




    return 0;
}
