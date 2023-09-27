#include <stdio.h>

int main() {
  int i, j, n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = n; i >= 1; i--) {
    for (j = i; j <= 5; j++) {
      printf("%d",i);
    }
    printf("\n");
  }
}
