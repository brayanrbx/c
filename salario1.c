// This program calculates the salary with increase of the salary

#include <stdio.h>

int main() {
  float incre, nsalario, salario;
  printf("Ingrese el salario: ");
  scanf("%f", &salario);
  incre = salario * 0.25;
  nsalario = salario + incre;
  printf("Su nuevo salario es: %.3f", nsalario);
  fflush(stdin);
  getchar();
  return 0;
}
