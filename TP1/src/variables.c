#include <stdio.h>

int main()
{

    char c = a;
    unsigned char c1 = 1;
    int i = 2;
    unsigned int i1 = 3;
    short s = 4;
    unsigned short s1 = 5;
    long int l = 6;
    long unsigned int l1 = 7;
    long long int li = 8;
    long long int unsigned li1 = 9;

    float f = 10.1;
    double d = 11.2;
    long double d1 = 12.3;

  
    printf("char : %c et unsigned char : %u\n", c,c1);
    printf("int : %d et unsigned int : %u\n", i,i1);
    printf("short : %hd et unsigned short : %u\n", s,s1);
    printf("long : %ld et unsigned long : %u\n", li,l1);
    printf("long long : %ld et unsigned long : %u\n", li,li1);
    printf("float : %f\n", f);
    printf("double : %f\n", d);
    printf("long double : %f\n", d1);
}
  
