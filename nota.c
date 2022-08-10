// This program show a notes of a student

#include <stdio.h>
#include <string.h>

int main() {
  char nom[20];
  int cod;
  float p1, p2, p3, ex, def;
  printf("Digite Nombre: \n");
  fgets(nom, 20, stdin);
  printf("Digite Codigo: \n");
  scanf("%d", &cod);
  printf("Digite Primer Previo: \n");
  scanf("%f", &p1);
  printf("Digite Segundo Previo: \n");
  scanf("%f", &p2);
  printf("Digite Tercer Previo: \n");
  scanf("%f", &p3);
  printf("Digite Examen Final: \n");
  scanf("%f", &ex);
  def = ((p1 + p2 + p3) / 3) * 0.7 + (ex * 0.3);
  printf("El estudiante %s de codigo %d tiene una nota definitiva de: %f", nom, cod, def);
  fflush(stdin);
  getchar();
  return 0;
}
