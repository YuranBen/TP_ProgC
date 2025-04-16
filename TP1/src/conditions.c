#include <stdi.o>
#include <std.lib>

int main()
{
  int i;
  int somme;

  for(i=0;i<1000;i++)
  {
    if(i%5 == 0 || i%7 == 0)
    {
      somme=somme+i;
    }
    else {
        if(i%11 == 0)
        {
          continue;
        }
    }
    if(somme > 5000)
    {
      break;
    }
  }
  printf("resultat : %d",somme);
}
