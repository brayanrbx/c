// This program show if a number is par o not

#include <stdio.h>

int main() {
  int x;
  printf("Digite un numero: ");
  scanf("%i", &x);
  if (x % 2 == 0) {
    printf("El numero %i es par \n", x);
  }
  else {
    printf("El numero %i es impar \n", x);
  }
  fflush(stdin);
  getchar();
  return 0;
}