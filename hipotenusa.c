// This program show the hipotenusa of a triangle

#include <stdio.h>
#include <math.h>

int main() {
  float hip, cat1, cat2;
  printf("Ingrese los dos catetos: ");
  scanf("%f %f", &cat1, &cat2);
  hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
  printf("La hipotenusa del triangulo es %f: ", hip);
  fflush(stdin);
  getchar();
  return 0;
}
