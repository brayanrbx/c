// This program show if a number is par o compound

#include <stdio.h>

int main() {
  int i, x, cont;
  printf("Digite un numero: ");
  scanf("%i", &x);
  i = 1;
  while (i <= x && cont <= 2) {
    if (x % i == 0) {
      cont++;
    }
    i++;
  }
  if (cont > 2) {
    printf("Es un numero compuesto");
  }
  else {
    printf("Es un numero primo");
  }
  fflush(stdin);
  getchar();
  return 0;
}