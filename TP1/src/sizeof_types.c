#include <stdio.h>

int main()
{
    printf("char : %d octets\n", sizeof(signed char));
    printf("unsigned char : %d octets\n", sizeof(unsigned char));
    
    printf("int : %d octets\n", sizeof(signed int));
    printf("unsigned int : %d octets\n", sizeof(unsigned int));
    
    printf("long : %d octets\n", sizeof(signed long int));
    printf("unsigned long : %d octets\n", sizeof(unsigned long int));
    
    printf("short : %d octets\n", sizeof(signed short));
    printf("unsigned short : %d octets\n", sizeof(unsigned short));

    printf("long long : %d octets\n", sizeof(signed long long int));
    printf("unsigned long long : %d octets\n", sizeof(unsigned long long int));
    
    printf("double : %d octets\n", sizeof(double));
    printf("float : %d octets\n", sizeof(float));
    printf("long double : %d octets\n", sizeof(long double));
}
  
