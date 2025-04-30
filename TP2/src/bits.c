#include <stdlib.h>
#include <stdio.h>

int main()
{
  int d = 268439552;
  int d4 = d << 4;
  int d20 = d << 20;

  printf("%d",d4);
  printf("%d",d20);

  if(d4 == 1 && d20 == 1)
  {
    printf("1 \n");
  }
  else
  {
    printf("0 \n");
  }
}
