// This program change the value of x and y through the use of pointers

#include <stdio.h>
void cambio();

int main() {
  int x, y;
  x = 5;
  y = 10;
  cambio(&x, &y);
  printf("El valor de x es %i y el valor de y es %i", x, y);
  getchar();
  return 0;
}

void cambio(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
