// This program show the use of the arithmetic operators

#include <stdio.h>

int main() {
  int n1, n2;
  int sum = 0, res = 0, mult = 0, div = 0;
  printf("Ingrese dos numeros: ");
  scanf("%i %i", &n1, &n2);
  sum = n1 + n2;
  res = n1 - n2;
  mult = n1 * n2;
  div = n1 / n2;
  printf("La suma es: %i \n", sum);
  printf("La resta es: %i \n", res);
  printf("La multiplicacion es: %i \n", mult);
  printf("La division es: %i \n", div);
  fflush(stdin);
  getchar();
  return 0;
}
