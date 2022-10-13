#include <stdio.h>
int main ()
{
    int i, j;

    for (i=1; i<=5; i++)//1 2
    {
        for (j=1; j<=i; j++)//1, 2
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
