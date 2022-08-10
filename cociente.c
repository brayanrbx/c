// this program show teh rest and quotient of two numbers

#include <stdio.h>

int main() {
  int x, y;
  float residuo = 0, cociente = 0;
  printf("Ingresar dividendo: ");
  scanf("%i", &x);
  printf("Ingresar divisor: ");
  scanf("%i", &y);
  if (y == 0) {
    printf("Error\nEl divisor debe ser distinto de cero");
  }
  if (y != 0) {
    residuo = (x % y);
    cociente = (x / y);
    printf("El residuo es: %f", residuo);
    printf("\nEl cociente es: %f", cociente);
  }
  fflush(stdin);
  getchar();
  return 0;
}