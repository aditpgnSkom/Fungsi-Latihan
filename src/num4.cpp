#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int squareInt(int);
int randomInt(int);

int main() {
  int rs;

  srand(time(NULL));
  rs = squareInt(randomInt(10));
  printf("Random Square = %d\n", rs);
}

int randomInt(int y) {
  return 1 + rand() % y;
}

int squareInt(int x) {
  return x * x;
}