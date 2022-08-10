// This program display the hour in 24 format

#include <stdio.h>

int main() {
  int hora, minuto, segundo;
  printf("Ingrese la hora: ");
  scanf("%i", &hora);
  printf("Ingrese los minutos: ");
  scanf("%i", &minuto);
  printf("Ingrese los segundos: ");
  scanf("%i", &segundo);
  if (hora <= 23 && minuto <= 59 && segundo <= 59) {
    segundo += 1;
    if (segundo == 60) {
      minuto += 1;
      segundo = 0;
    }
    if (minuto == 60) {
      hora += 1;
      minuto = 0;
    }
    if (hora == 24) {
      hora = 0;
    }
  printf("La hora es: %i:%i:%i", hora, minuto, segundo);
  }
  else {
    printf("No ha ingresado una hora correcta");
  }
  fflush(stdin);
  getchar();
  return 0;
}