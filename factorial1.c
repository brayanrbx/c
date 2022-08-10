// This program calculate the factorial of a number.

#include <stdio.h>
void factorial();

int main() {
  factorial();
  getchar();
  fflush(stdin);
  return 0;
}

void factorial() {
  int i, aux, x;
  printf("Digite un numero: ");
  scanf("%i", &x);
  aux = 1;
  for (i = 1; i <= x; i++) {
    aux *= i;
  }
  printf("El factorial del numero %i es: %i", x, aux);
}