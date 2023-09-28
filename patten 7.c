#include <stdio.h>
int main()
{
    int i, j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n; i>=65; i--)
    {
        for(j=65; j<=i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
