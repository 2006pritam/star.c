#include <stdio.h>

int main()
{
    int i, j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%4d",k++);
            k++;
        }
        printf("\n");
    }
    }
