#include <stdio.h>
main() 
{
    int i,j,k,n,a=64;
    printf("enter the number of line");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",a+j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",a+j);
        }
        printf("\n");
    }
}
