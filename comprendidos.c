// This program show the numbers that are between two numbers

#include <stdio.h>

int main() {
  int x, y, i;
  printf("Introduce un numero: ");
  scanf("%i", &x);
  printf("Introduce un numero mayor al anterior: ");
  scanf("%i", &y);
  if (x > y) {
    printf("Error: El 2do numero debe ser mayor al primero");
  }
  else {
    for (i = x + 1; i < y; i++) {
      printf("%i, ", i);
    }
  }
  printf("\n");
  fflush(stdin);
  getchar();
  return 0;
}
