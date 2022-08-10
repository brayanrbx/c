// This program show a menu

#include <stdio.h>
#include <math.h>

int main() {
  int opcion, n1, pot;
  printf("\tSeleccione la opcion que desea ejecutar");
  printf("\n1. Cubo de un numero");
  printf("\n2. Saber si el numero es par o impar");
  printf("\n3. Salir");
  printf("\nOpcion: ");
  scanf("%i", &opcion);
  switch (opcion) {
  case 1:
    printf("Digite un numero: ");
    scanf("%i", &n1);
    pot = pow(n1, 3);
    printf("El cubo del numero ingresado es %i", pot);
  break;

  case 2:
    printf("Digite un numero: ");
    scanf("%i", &n1);
    if (n1 % 2 == 0) {
      puts("El numero es par");
    }
    if (n1 % 2 == 1) {
      puts("El numero es impar");
    }
  break;

  case 3:
  break;

  default:
    printf("Se equivoco de opcion de menu");
  }
  fflush(stdin);
  getchar();
  return 0;
}
