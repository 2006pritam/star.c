#include <stdio.h>

int main()
{
    int i, j,n=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%4d",n++);
        }
        printf("\n");
    }
    }
