// This program show the sqrt of a number

#include <stdio.h>
#include <math.h>

int main() {
  int n1;
  float squ = 0;
  printf("Digite un numero: ");
  scanf("%i", &n1);
  squ = sqrt(n1);
  if (n1 > 0) {
    printf("La raiz del numero %i es: %f", n1, squ);
  }
  else if (n1 < 0) {
    puts("El numero tiene raiz imaginaria");
  }
  fflush(stdin);
  getchar();
  return 0;
}
