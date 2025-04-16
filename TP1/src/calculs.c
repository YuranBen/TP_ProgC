#include <stdlib.h>
#include <stdio.h>

int main()
{
  int num1,num2;
  char op;
  float res;

  printf("entrez le premier chiffre : \n");
  scanf("%d",&num1);

  printf("entrez le second chiffre : \n");
  scanf("%d",&num2);

  printf("entrez l'opérateur : \n");
  scanf("%c",&op);

  switch(op)
  {
    case '+':
      res = num1 + num2;
      break;
    case '-':
      res = num1 - num2;
      break;
    case '*':
      res = num1 * num2;
      break;
    case '/':
      res = num1 / num2;
      break;
    case '%':
      res = num1 % num2;
      break;
    case '&':
      res = num1 & num2;
      break;
    case '|':
      res = num1 | num2;
      break;
    case '~':
      res = num1; ~num2;
      break;
    default:
      printf("Mauvais opérateur \n");
    }
}
