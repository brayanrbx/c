// This program simulate a automatic cash

#include <stdio.h>

int main() {
  int opcion;
  float agregar, retirar, saldo = 1000;
  printf("\tBienvenido a su cajero virtual");
  printf("\n1. Ingreso en cuenta");
  printf("\n2. Retirar dinero de la cuenta");
  printf("\n3. Salir");
  printf("\nOpcion: ");
  scanf("%i", &opcion);
  switch (opcion) {
  case 1:
    printf("\nCuanto dinero desea ingresar a la cuenta: ");
    scanf("%f", &agregar);
    saldo += agregar;
    printf("el saldo total es %f", saldo);
  break;

  case 2:
    printf("\nCuanto dienro desea retirar: ");
    scanf("%f", &retirar);
    if (retirar > saldo) {
      printf("La cantidad a retirar es mayor al saldo");
    }
    else {
      saldo -= retirar;
      printf("Su nuevo saldo es de %f", saldo);
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
