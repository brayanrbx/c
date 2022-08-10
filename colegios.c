// This program simulate the cost of a school if a private or public

#include <stdio.h>

int main() {
  int opc, x;
  char resp;
  do {
    printf("Escoja el tipo de colegio\n");
    printf("1. Publico\n");
    printf("2. Privado\n");
    scanf("%i", &opc);
    switch (opc) {
      case 1:
        printf("Escoja el nombre del colegio\n");
        printf("1. Colegio a\n");
        printf("2. Colegio b\n");
        printf("3. Colegio c\n");
        scanf("%i", &x);
        switch (x){
        case 1:
          printf("La matricula es de 300");
        break;

        case 2:
          printf("La matricula es de 200");
        break;

        case 3:
          printf("La matricula es de 100");
        break;
        }
      break;

      case 2:
        printf("Escoja el nombre del colegio\n");
        printf("1. Colegio a\n");
        printf("2. Colegio b\n");
        printf("3. Colegio c\n");
        scanf("%i", &x);
        switch (x) {
        case 1:
          printf("La matricula es de 600");
        break;

        case 2:
          printf("La matricula es de 500");
        break;

        case 3:
          printf("La matricula es de 400");
        break;
        }
      break;
    }
    printf("\nDesea continuar si (Y) o no (N): ");
    scanf(" %c", &resp);
  } while (resp == 'Y' || resp == 'y');
  getchar();
  return 0;
}