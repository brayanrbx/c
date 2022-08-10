// This program show the discount of a motorcycle purchase

#include <stdio.h>
#include <string.h>
#define HONDA 0.05
#define YAMAHA 0.08

int main() {
  const float SUZUKI = 0.1;
  const float OTRA = 0.02;
  float total, precio = 0, desc;
  char marca[30];
  printf("La marca de la moto es: ");
  gets(marca);
  printf("El precio de la moto es de: ");
  scanf("%f", &precio);
  if (strcmp(marca, "honda") == 0) {
    desc = precio * HONDA;
    total = precio - desc;
    printf("La moto tiene un costo de: %f", total);
  }
  else if (strcmp(marca, "yamaha") == 0) {
    desc = precio * YAMAHA;
    total = precio - desc;
    printf("La moto tiene un costo de: %f", total);
  }
  else if (strcmp(marca, "suzuki") == 0) {
    desc = precio * SUZUKI;
    total = precio - desc;
    printf("La moto tiene un costo de: %f", total);
  }
  else {
    desc = precio * OTRA;
    total = precio - desc;
    printf("La moto tiene un costo de: %f", total);
  }
  fflush(stdin);
  getchar();
  return 0;
}
