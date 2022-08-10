// This program realizes the sum of the first n natural numbers.

#include <stdio.h>

int main() {
  int i, n, suma = 0, cont = 0;
  printf("Digite un numero: ");
  scanf("%i", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 == 0) {
      suma += i;
      cont++;
    }
  }
  printf("La suma de todos los numeros pares desde 1 hasta %i es: %i\n", n, suma);
  printf("La cantidad de numeros pares sumados desde 1 hasta %i es: %i", n, cont);
  fflush(stdin);
  getchar();
  return 0;
}
