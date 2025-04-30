#include <stdlib.h>
#include <stdio.h>

int main()
{
  int a = 2;
  int b = 4;
  int pui = a;
  int i;

  for(i=0;i<b+1;i++)
  {
    pui=pui*a;
  }

  printf("resultat = %d \n",pui);

  return EXIT_SUCCESS;
}
