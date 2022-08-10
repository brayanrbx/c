// This program show if 2 strings are equal

#include <stdio.h>
#include <string.h>

int main() {
  char v1[5];
  char v2[5];
  printf("Introduce la 1ra frase: ");
  //scanf ("%s", &vector); //solo toma hasta caracteres hasta antes de un
  //espacio, por tanto no se recomienda para strings
  //gets (vector); // si la cantidad de caracteres sobrepasa la del vector string
  //entonces sobreescribe lo de otra memoria, no se recomienda usar
  fgets(v1, 5, stdin);
  printf("Introduce la 2da frase: ");
  fflush(stdin);
  fgets(v2, 5, stdin);
  if (strcmp(v1, v2) == 0) {
    printf("Las dos cadenas son iguales\n\n");
  }
  else {
    printf("Las dos cadenas son distintas\n\n");
  }
  fflush(stdin);
  getchar();
  return 0;
}