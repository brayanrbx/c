// This program show the use of the arithmetic operators with switch and loops

#include <stdio.h>

int main() {
  int opc, op;
  double res, x, y;
  do {
  printf("Escriba numero 1: ");
  scanf("%lf", &x);
  printf("Escriba numero 2: ");
  scanf("%lf", &y);
  do {
    printf("menu\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Digite opc: ");
    scanf("%d", &opc);
    switch (opc) {
      case 1:
        res = x + y;
        printf("La suma es: %f", res);
      break;

      case 2:
        res = x - y;
        printf("La resta es: %f", res);
      break;

      case 3:
        res = x * y;
        printf("La multiplicacion es: %f", res);
      break;

      case 4:
        res = x / y;
        printf("La division es: %f", res);
      break;

      default:
        printf("Opcion no valida");
      }
      printf("\nPresione 1 si desea realizar otra operacion o 2 si desea cambiar los valores ingresados: ");
      scanf("%d", &op);
  } while (op != 2);
  printf("presione 1 para continuar o 2 para salir: ");
  scanf("%d", &op);
  } while (op != 2);
  getchar();
  return 0;
}
