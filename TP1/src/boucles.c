#include <stdio.h>

int main() 
{
  int r,i,j;
  printf("Combien d'étoiles ?\n"); 
  scanf ("%d",r);
  for (i=0 ; i<r ; i++)
    {
      for (j=0 ; j<i ; j++)
        {
          printf("*");
        }
     }
  }
