// This program show if a person is > 18 or < 18

#include <stdio.h>
#include <string.h>

int main() {
  int edad;
  char nombre[30];
  char sexo[30];
  printf("Ingrese su nombre: ");
  gets(nombre);
  printf("Ingrese su sexo: ");
  gets(sexo);
  printf("Ingrese su edad: ");
  scanf("%i", &edad);
  if (strcmp(sexo, "masculino") == 0 && edad >= 18) {
    printf("La persona %s es mayor de edad ", nombre);
  }
  else {
    printf("No es mayor de edad");
  }
  fflush(stdin);
  getchar();
  return 0;
}
