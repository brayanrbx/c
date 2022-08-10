// This program  fill a matrix with random numbers and then print it

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void introduce(int matriz[][5]);
void leer(int matriz[][5]);

int main() {
  int matriz[5][5];
  introduce(matriz);
  leer(matriz);
  getchar();
  return 0;
}

void introduce(int matriz[][5]) {
  int i, j;
  srand(time(NULL));
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = rand() % 10;
    }
  }
}

void leer(int matriz[][5]) {
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf(" %i", matriz[i][j]);
    }
    printf("\n");
  }
}
