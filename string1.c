// This program loops through a tring and then print this

#include <stdio.h>
#include <string.h>
void cambio(char c1[]);

int main() {
  char c1[10];
  printf("Introduzca una frase: ");
  fgets(c1, 10, stdin);
  cambio(c1);
  printf("%s\n", c1);
  fflush(stdin);
  getchar();
  return 0;
}

void cambio(char c1[]) {
  int i;
  for (i = 0; i < 10; i++) {
    if (c1[i] == '\n') {
      c1[i] == '\0';
    }
  }
}