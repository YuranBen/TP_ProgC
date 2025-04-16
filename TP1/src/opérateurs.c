#include <stdio.h>
#include <stdbool.h>

int main()
{
  int a = 16;
  int b = 3;

  int add = a + b;
  int sus = a - b;
  int mul = a*b;
  int div = a/b;
  int res = a%b;
  bool comp = a == b;
  bool comp2 = a > b;

  printf("%d, %d, %d, %d, %d",add,sus,mul,div,res);

}
