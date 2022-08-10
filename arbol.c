// This program show a tree in the screen

#include <stdio.h>

int main() {
  int i, j, k, x;
  printf("Digite el numero de filas: ");
  scanf("%i", &x);
  for (i = 1; i <= x; i++) {
    printf("\n");
    for (j = i; j <= x; j++) {
      printf(" ");
    }
    for (k = 1; k <= i; k++) {
      printf("* ");
    }
  }
  fflush(stdin);
  getchar();
  return 0;
}
