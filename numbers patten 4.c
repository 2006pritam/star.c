#include <stdio.h>

int main() {
  int i, j, n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 1; i <= 5; i++) {
    for (j = 1; j <=5; j++) {
      printf("%d",j);
    }
    printf("\n");
  }
}
