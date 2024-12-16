#include <stdio.h> 
int main (void)
{
    float a,b,c,d;
    a=25;
    b=25.25;
    c=25.123456;
    d=25.123456789;
    printf("a = %e\n",a); // Output: a = 2.500000e+01
    printf("b = %E\n",b); // Output: b = 2.525000E+01
    printf("c = %e\n",c); // Output: c = 2.512346e+01
    printf("d = %E\n",d); // Output: d = 2.512346E+01
    printf("a = %7e\n",a); // Output: a = 2.500000e+01
    printf("b = %5e\n",b); // Output: b = 2.525000e+01
    printf("c = %7.0E\n",c); // Output: c =   3E+01
    printf("d = %10.2E\n",d); // Output: d =   2.51E+01
}
