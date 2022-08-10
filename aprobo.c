// This program show if the student is approved or not

#include <stdio.h>

int main() {
  float examen = 0;
  printf("Digite la nota del examen: ");
  scanf("%f", &examen);
  if (examen > 2.9) {
    puts("El alumno esta aprobado");
  }
  fflush(stdin);
  getchar();
  return 0;
}