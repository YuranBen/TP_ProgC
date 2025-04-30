#include <stdlib.h>
#include <stdio.h>

int main()
{
  int u0 = 0;
  int u1 = 1;
  int un = 0;
  int n = 0;

  printf("Entrez n : \n");
  scanf("%d",&n);

  for(i=0;i<n-1;i++)
  {
    un = u0*(i-1) + u1*(i-2);
    print("u%d = %d \n",i,un);
  }
return EXIT_SUCCESS;
}
