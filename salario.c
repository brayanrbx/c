// this programa calculates the salary of a worker

#include <stdio.h>

int main() {
  float horast, valorh, salario;
  printf("Ingrese las horas trabajadas: ");
  scanf("%f", &horast);
  valorh = 25000;
  salario = valorh * horast;
  printf("Su salario es: %.3f", salario);
  fflush(stdin);
  getchar();
  return 0;
}
