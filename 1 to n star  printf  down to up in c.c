#include <stdio.h>
int main ()
{
    int i, j;

    for (i=1; i<=5; i++)//1 2
    {
        for (j=i; j<=5; j++)//5, 4, 3,2,1
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
