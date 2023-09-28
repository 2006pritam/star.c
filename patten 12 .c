#include <stdio.h>

int main()
{
    int i, j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }

    return 0;
}
