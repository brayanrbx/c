// This program sort a vector

#include <stdio.h>
#include <stdlib.h>
void ordenar(int a[]);
void imprimir(int x[]);

int main() {
  int v[10] = {9, 1, 4, 7, 0, 8, 2, 5, 3, 6};
  ordenar(v);
  imprimir(v);
  getchar();
  return 0;
}

void ordenar(int a[]) {
  int i, j;
  int aux = 0;
  for (i = 0; i < 10; i++) {
    for (j = i; j < 10; j++) {
      if (a[i] > a[j]) {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
}
}

void imprimir(int x[]) {
  int i;
  for (i = 0; i < 10; i++) {
    printf("%i, ", x[i]);
  }
}
