// This program show a vector

#include <stdio.h>
void fun(int *v);
void imprimir(int *v);

int main() {
  int v[3];
  fun(v);
  imprimir(v);
  fflush(stdin);
  getchar();
  return 0;
}

void fun(int *v) {
  int i;
  for (i = 0; i < 3; i++) {
    printf("Introduce un valor para la posicion %i : ", i + 1);
    scanf("%i", (v + i));
  }
}

void imprimir(int *v) {
  int i;
  for (i = 0; i < 3; i++) {
    printf("%i, ", *(v + i)); // v[i] = *(v + i)
  }
}
