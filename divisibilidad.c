// this program show if a number is divisible in other

#include <stdio.h>

int main() {
  int n1, n2;
  printf("Digite dos numeros : ");
  scanf("%i %i", &n1, &n2);
  if (n1 % n2 == 0) {
    printf("El numero %i es divisble entre %i", n1, n2);
  }
  else {
    printf("El numero %i no es divisble entre %i", n1, n2);
  }
  fflush(stdin);
  getchar();
  return 0;
}
