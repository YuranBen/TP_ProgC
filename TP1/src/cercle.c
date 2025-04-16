#include <stdio.h>
#include <math.h>

int main()
{
  
  double rayon;
  printf("entrez votre rayon : \n");
  scanf("%lf",&rayon);

  double aire = M_PI * rayon * rayon;
  double perimetre = 2 * M_PI * rayon;

  printf("aire du cercle %lf \n",aire);
  printf("perimetre du cercle %lf \n",perimetre);
}
