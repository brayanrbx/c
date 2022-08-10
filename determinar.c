// This program show the sum or multiplication of the ten first numbers

#include <stdio.h>

int main() {
  int i = 1, x, suma = 0, mult = 1;
  printf("Digite 1 para realizar la multiplicacion de los 10 primeros u otro numero para hacer la suma: ");
  scanf("%i", &x);
  if (x == 1) {
    while (i <= 10) {
      mult = mult * i;
      i++;
    }
    printf("La multiplicacion de los 10 primeros numeros es: %i\n", mult);
  }
  else {
    while (i <= 10) {
      suma += i;
      i++;
    }
    printf("La suma de los 10 primeros numeros es: %i", suma);
  }
  fflush(stdin);
  getchar();
  return 0;
}
