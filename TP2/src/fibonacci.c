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

  if (n >= 0)
    printf("u0 = %d\n", u0);
  if (n >= 1)
    printf("u1 = %d\n", u1);

  for(i=2;i<=n;i++)
  {
    un = u0+u1;
    printf("u%d = %d \n",i,un);
    u0 = u1;
    u1 = un;
  }
return EXIT_SUCCESS;
}
