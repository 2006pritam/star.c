#include <stdio.h>

int main() 
{
  int i,j,k,n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 1; i<=n; i++) 
{
    for (j =1;j<=n-i; j++) 
    {
      printf(" ");
    }
    for(k=1;k<=(2*i-1);k++) 
    {
    printf("*");
    }
    printf("\n");
    }
    }
