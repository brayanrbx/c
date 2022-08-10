// This program show the mayor number of 3 numbers

#include <stdio.h>

int main() {
  int x, y, z, may, men;
  printf("Digite el 1er numero: ");
  scanf("%i", &x);
  printf("Digite el 2do numero: ");
  scanf("%i", &y);
  printf("Digite el 3er numero: ");
  scanf("%i", &z);

  //El mayor es x
  if (x > y && x > z) {
    if (y > z) {
      may = x;
      men = z;
    }
    else {
      may = x;
      men = y;
    }
  }

  //El mayor es y
  else if (y > x && y > z) {
    if (x > z) {
      may = y;
      men = z;
    }
    else {
      may = y;
      men = x;
    }
  }

  //El mayor es z
  else if (x > y) {
    may = z;
    men = y;
  }
  else {
    may = z;
    men = x;
  }
  printf("El numero mayor es: %i \nEL numero menor es: %i ", may, men);
  fflush(stdin);
  getchar();
  return 0;
}