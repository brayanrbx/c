// This program show the sum of numbers pars that are include between 1 and 100

#include <stdio.h>

int main() {
  int i, suma = 0;
  for (i = 0; i <= 100; i += 2) {
    suma += i;
  }
  printf("La suma de los numeros pares que estan entre 1 y 100 es: %i", suma);
  getchar();
  return 0;
}
