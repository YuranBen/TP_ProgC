#include <stdlib.h>
#include <stdio.h>

int main()
{
  int u0 = 0;
  int u1 = 1;
  int un = 1;
  int n;
  int i;

  printf("Entrez n : \n");
  scanf("%d",&n);

  for(i=0;i<n-1;i++)
  {
    un = un*(i-1) + un*(i-2);
    printf("u%d = %d \n",i,un);
  }
return EXIT_SUCCESS;
}
