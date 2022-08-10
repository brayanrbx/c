// This program convert the celcius to farenheit

#include <stdio.h>

int main() {
  double cel, far = 0;
  printf("Ingrese los grados celcius: ");
  scanf("%lf", &cel);
  far = (1.8 * cel) + 32;
  printf("Los grados en Fahrenheit son : %f ", far);
  fflush(stdin);
  getchar();
  return 0;
}
