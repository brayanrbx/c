// This program show the toll that the user must pay for a car

#include <stdio.h>

int main() {
  int vehiculo;
  int peaje1, peaje2, peaje3;
  peaje1 = 500;
  peaje2 = 3000;
  peaje3 = 300;
  printf("Seleccione el tipo de vehiculo que va a utilizar: ");
  printf("\n1. turismo ");
  printf("\n2. autobus ");
  printf("\n3. motocicleta \n\n");
  scanf("%i", &vehiculo);
  switch (vehiculo) {
  case 1:
    printf("El peaje que debe pagar es de %i", peaje1);
  break;

  case 2:
    printf("El peaje que debe pagar es de %i", peaje2);
  break;

  case 3:
    printf("El peaje que debe pagar es de %i", peaje3);
  break;

  default:
    printf("Vehiculo no autorizado");
  }
  fflush(stdin);
  getchar();
  return 0;
}
