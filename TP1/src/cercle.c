#include <stdio.h>
#include <math.h>

int main()
{
  double rayon;
  printf("entrez votre rayon : ");
  scanf("%f",&rayon);

  double aire = M_PI * rayon * rayon;
  double perimetre = 2 * M_PI * rayon;

  printf("aire du cercle %f \n",&aire);
  printf("perimetre du cercle %f \n",&perimetre);
}
