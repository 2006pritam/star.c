#include<stdio.h>

main()
{
    int i,j,n;

    printf("Enter the no of lines\n");
    scanf("%d",&n);

    for(i=69;i>=65;i--)
    {
        for(j=65;j<=69;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}
