// This program  replaces the letter a with a blank space

#include <stdio.h>
#include <string.h>
void cambio(char c1[]);

int main() {
  char c1[] = "Como mola este program";
  cambio(c1);
  printf("%s\n", c1);
  fflush(stdin);
  getchar();
  return 0;
}

void cambio(char c1[]) {
  int i, limite;
  limite = strlen(c1);
  for (i = 0; i < limite; i++) {
    if (c1[i] == 'a') {
      c1[i] = ' ';
    }
  }
}