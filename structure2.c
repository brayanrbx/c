// this program simulate a traductor

#include <stdio.h>
#include <string.h>
#define N 50

typedef struct {
  char eng[N];
  char esp[N];
  int lleno;
} traductor;

traductor trad[N];
void empty();
void add();
void translate();
void tradu(int op);
void cambio(char palabra[N]);

int main() {
  int op;
  char key;
  empty();

  do {
    do {
      printf("Elige que deseas hacer: \n");
      printf("(1) Añadir palabras al traductor. \n");
      printf("(2) Buscar la traduccion de una palabra. \n");
      scanf("%i", &op);
    } while (op < 1 || op > 2);

    switch (op) {
    case 1:
      add();
    break;
    case 2:
      translate();
    break;
    }
    printf("Introduce si desea realizar otra operacion: (S/N) ");
    scanf("%c", &key);
  } while (key == 'S' || key == 's');
  fflush(stdin);
  getchar();
  return 0;
}

void empty() {
  int i;
  for (i = 0; i < N; i++) {
    trad[i].lleno = 0;
  }
}

void add() {
  int i, aux = 0;
  for (i = 0; i < N && aux == 0; i++) {
    if (trad[i].lleno == 0) {
      printf("introduce la palabra en ingles: ");
      fflush(stdin);
      fgets(trad[i].eng, N, stdin);
      cambio(trad[i].eng);
      printf("introduce la palabra en espanol: ");
      fflush(stdin);
      fgets(trad[i].esp, N, stdin);
      cambio(trad[i].esp);
      trad[i].lleno = 1;
      aux = 1;
    }
  }
}

void translate() {
  int op;
  do {
    printf("Elige que deseas hacer: \n");
    printf("(1) Traducir de ingles a espanol. \n");
    printf("(2) Traducir de espanol a ingles. \n");
    scanf("%i", &op);
  } while (op < 1 || op > 2);

  switch (op) {
  case 1:
    tradu(op);
  break;
  case 2:
    tradu(op);
  break;
  }
}

void tradu(int op) {
  int i, j, temp = 0;
  char aux[N];

  printf("Introduce la palabra que desea buscar: ");
  fflush(stdin);
  fgets(aux, N, stdin);
  cambio(aux);
  if (op == 1) {
    for (i = 0; i < N && temp == 0; i++) {
      j = strcmp(aux, trad[i].eng);
      if (j == 0) {
        printf("La traduccion de  %s es %s. \n", trad[i].eng, trad[i].esp);
        temp = 1;
      }
    }
  }
  else {
    for (i = 0; i < N && temp == 0; i++) {
      j = strcmp(aux, trad[i].esp);
      if (j == 0) {
        printf("La traduccion de  %s es %s. \n", trad[i].esp, trad[i].eng);
        temp = 1;
      }
    }
  }
}

void cambio(char palabra[N]) {
  int i;
  for (i = 0; i < N; i++) {
    if (palabra[i] == '\n') {
      palabra[i] = '\0';
    }
  }
}