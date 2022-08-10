// This program show the multiples of number 3

#include <stdio.h>

int main() {
  int i = 1, x;
  printf("Digite un numero: ");
  scanf("%i", &x);
  while (i <= x) {
    if (i % 3 == 0) {
      printf("Los multiplos de 3 desde 1 hasta n son: %i\n", i);
    }
    i++;
  }
  fflush(stdin);
  getchar();
  return 0;
}
