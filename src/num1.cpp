#include <stdio.h>

void cetak_pesan(void);

int main() {
  int i, jml;

  printf("Masukkan Jumlah Pesan : ");
  scanf("%d", &jml);

  for(i = 1; i <= jml; i++)
    cetak_pesan();
  printf("\n");
}

void cetak_pesan() {
  printf("Cetak pesan ini\n");
}