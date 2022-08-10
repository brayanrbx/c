// This program show if a number is positive or negative

#include <stdio.h>

int main() {
  int n1;
  printf("Escriba un numero: ");
  scanf("%i", &n1);
  if (n1 > 0) {
    puts("El numero es positivo");
  }
  if (n1 < 0) {
    puts("El numero es negativo");
  }
  fflush(stdin);
  getchar();
  return 0;
}
