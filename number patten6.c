#include<stdio.h>
main()
{
    int i, j, n, k;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for(k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
