#include <stdio.h>

int main() {
  char letter;
  int row, col;

  for (row = 0; row < 5; row++) {
    for (col = 0; col < 5; col++) {
      letter = 'A' + row * 5 + col;
      printf("%c ", letter);
    }
    printf("\n");
  }

  return 0;
}
