// This program show different numbers until 0 number is introduced

#include <stdio.h>

int main() {
  int suma = 0, x = 1;
  printf("Este programa sumara cualquier cantidad de numeros que ingrese hasta que se encuentre un 0\n");
  while (x != 0) {
    scanf("%i", &x);
    suma += x;
  }
  printf("La suma es: %i", suma);
  fflush(stdin);
  getchar();
  return 0;
}