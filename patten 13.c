#include <stdio.h>

main() 
{
  int i,j,n;
printf("enter the number");
scanf("%d",&n);
for (i= 68; i>= 65; i--)
{
    for (j =68; j>=i; j--)
     {
      printf("%c ",j);
    }
    printf("\n");
  }
  for (i= 65; i<= 68; i++) 
{
    for (j =68; j>=i; j--)
     {
      printf("%c ",j);
    }
    printf("\n");
  }
}
