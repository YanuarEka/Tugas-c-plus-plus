/* funcition atol */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atol */

int main ()
{
  long int li;
  char buffer[256];
  printf ("Masukan Nomer: ");
  fgets (buffer, 256, stdin);
  li = atol(buffer);
  printf ("Nilai yang dimasukan adalah %ld. gandanya adalah %ld.\n",li,li*2);
  return 0;
}