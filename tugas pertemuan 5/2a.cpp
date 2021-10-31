#include <stdio.h>      
#include <stdlib.h>   

int main ()
{
  int nilai;
  char angka[256];
  printf ("Masukan Angka : ");
  fgets (angka, 256, stdin);
  nilai = atoi (angka);
  printf ("Nilai yang dimasukan %d gandanya jadi  %d.\n",nilai,nilai*2);
  return 0;
}