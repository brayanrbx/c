// this program show a word in the console

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, n;
  char x[50];
  printf("Se imprimira la palabra que escriba en base al numero de veces que el usuario elija");
  printf("\nDigite la palabra que quiere que se repita: ");
  gets(x);
  printf("\nDigite el numero de ves que quiere que se repita la palabra: ");
  scanf("%i", &n);
  for (i = 1; i <= n; i++) {
    printf("\n%s", x);
  }
  fflush(stdin);
  getchar();
  return 0;
}