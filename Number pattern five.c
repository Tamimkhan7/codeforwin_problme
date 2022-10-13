#include <stdio.h>
int main ()
{
    int i, j, n;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (j== n-4/2 && i==n-4/2)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }



    return 0;
}
