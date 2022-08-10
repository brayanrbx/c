// This program show the hour in seconds

#include <stdio.h>

int main() {
  int horas, minutos, segundos, t1, t2, total;
  printf("Digite el numero de horas: ");
  scanf("%i", &horas);
  printf("Digite el numero de minutos: ");
  scanf("%i", &minutos);
  printf("Digite el numero de segundos: ");
  scanf("%i", &segundos);
  t1 = horas * 3600;
  t2 = minutos * 60;
  total = t1 + t2 + segundos;
  printf("El equivalente en segundos es: %i", total);
  fflush(stdin);
  getchar();
  return 0;
}
