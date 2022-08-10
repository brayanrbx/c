// This program calculate the factorial of two number

#include <stdio.h>
int factorial(int a);

int main() {
  int x, y, fact1, fact2;
  printf("Introduce el primer numero para calcular su factorial: ");
  scanf("%i", &x);
  printf("Introduce el segundo numero para calcular su factorial: ");
  scanf("%i", &y);
  fact1 = factorial(x);
  fact2 = factorial(y);
  printf("El factorial de %i es: %i\n", x, fact1);
  printf("El factorial de %i es: %i\n", y, fact2);
  fflush(stdin);
  getchar();
  return 0;
}

int factorial(int a) {
  int i, aux;
  aux = 1;
  for (i = 1; i <= a; i++) {
    aux *= i;
  }
  return aux;
}