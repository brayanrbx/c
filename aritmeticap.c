// This program show arithmetic with pointers

#include <stdio.h>

int main() {
  int a[5] = {10, 20, 40, 60, 30};
  printf("%d \n", a[0 + 2]);
  printf("%p \n", &a[0]);
  printf("%p \n", a);        // a = &a[0]
  printf("%d \n", *a);       // *a = a[0]
  printf("%d \n", *(a + 1)); // *(a + 1) = a[1] = a[0 + 1]
  printf("%d \n", a[0] + 1); // *a = a[0]
  printf("%d \n", *a + 1);   // *a + 1 = a[0] + 1

  int x;
  int *q;
  int *p;

  x = 5;
  p = &x;
  q = p;

  printf("%p \n", p);
  printf("%p \n", q);
  printf("%p \n", &x);

  *p = 6;
  *q = 3;
  printf("%d \n", x);

  p = a;
  printf("%i \n", p[4]);
  printf("%i \n", *(p + 4));
  printf("%i \n", *(a + 4));

  getchar();
  return 0;
}