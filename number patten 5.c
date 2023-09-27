#include<stdio.h>
 main() 
{
  int i, j, n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 5; i >= 1; i--) 
{
    for (j = i; j <=5; j++) 
    {
      printf("%d",j);
    }
    printf("\n");
  }
}
