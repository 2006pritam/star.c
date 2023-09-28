#include<stdio.h>
main()
{
int i,j;
i=4;
while(i>=1)
{
j=1;
while(j<=i)
{
    printf("*");
    j++;
}
printf("\n");
i--;
}
}
