// This program show the use of structure

#include <stdio.h>
#include <string.h>

typedef struct {
  int paginas;
  char nombre[50];
  float precio;
} libro;

int main() {
  /* libro JT, CR;
  JT.paginas = 50;
  JT.precio = 25,5;
  strcpy (JT.nombre, "Juego de Tronos");
  CR.paginas = 150;
  CR.precio = 30;
  strcpy (CR.nombre, "Choque de Reyes");
  printf ("El libro de juego de tronos tiene %i paginas,\n", JT.paginas);
  printf ("El nombre del libro es %s. \n", JT.nombre);
  printf ("El precio Juego de Tronos es: %f. \n", JT.precio);
  printf ("El libro de juego de tronos tiene %i paginas,\n", CR.paginas);
  printf ("El nombre del libro es %s. \n", CR.nombre);
  printf ("El precio Juego de Tronos es: %f. \n", CR.precio);
  */
  libro JT[10];
  int i;
  for (i = 0; i < 10; i++) {
    JT[i].precio = 25 + i;
    printf("El precio de la estructura %i es de %f.\n", i + 1, JT[i].precio);
  }
  getchar();
  return 0;
}