#include <stdlib.h>
#include <stdio.h>

int main()
{
  int a = 2;
  int b = 4;
  int pui;
  int i;

  for(i=0;i<b+1;i++)
  {
    pui=a*b;
  }

  printf("resultat = %u",&pui);

  return EXIT_SUCCESS;
}
