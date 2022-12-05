#include <stdio.h>

int OddEvenTest(int);

int main() {
  int a, hasil;

  a = 5;
  hasil = OddEvenTest(a);
  printf("\nDalam main program :\n");
  printf("a = %d; hasil = %d\n", a, hasil);
}

int OddEvenTest(int b) {
  int a;

  a = b % 2;
  printf("nilai a dalam fungsi = %d\n", a);
  return a;
}