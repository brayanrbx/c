// This program show the use of the ternary operator

#include <stdio.h>

int main() {
  int numero;
  printf("Digite un numero: ");
  scanf("%i", &numero);
  (numero % 2 == 0) ? printf("El numero es par") : printf("El numero es impar");
  fflush(stdin);
  getchar();
  return 0;
}
