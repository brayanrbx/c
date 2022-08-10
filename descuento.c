// This program show a discount of a purchase

#include <stdio.h>

int main() {
  float tcompra, desc, prec;
  printf("Digite el total de la compra: ");
  scanf("%f", &tcompra);
  desc = (tcompra * 0.15);
  prec = tcompra - desc;
  printf("El precio final de la compra es: %.3f", prec);
  fflush(stdin);
  getchar();
  return 0;
}
