// This program show the alphabet in the screen

#include <stdio.h>

int main() {
  char letra = 'a';
  do {
    printf(" %c.\n", letra);
    letra++;
  }
  while (letra <= 'z');
  getchar();
  return 0;
}
