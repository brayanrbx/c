// This program show the media of a sum of numbers

#include <stdio.h>

int main() {
  int i, x, y;
  float suma = 0;
  printf("Introduce la cantidad de numeros que quieres calcularle la media: ");
  scanf("%i", &x);
  i = 0;
  while (i < x) {
    printf("Introduce el %i numero: ", i + 1);
    scanf("%i", &y);
    suma += y;
    i++;
  }
  suma /= x;
  printf("La media es: %f\n", suma);
  fflush(stdin);
  getchar();
  return 0;
}