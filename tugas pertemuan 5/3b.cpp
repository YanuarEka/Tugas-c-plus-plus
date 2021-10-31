#include <stdio.h>
#include <string.h>

int main ()
{
  char kata1[]= "Hello I'm Yanuar Eka";
  char kata2[40];
  char kata3[40];

  strncpy ( kata2, kata1, sizeof(kata2) );
  strncpy ( kata3, kata2, 5 );
  kata3[5] = '\0'; 

  puts (kata1);
  puts (kata2);
  puts (kata3);

  return 0;
}