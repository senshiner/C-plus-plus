#include <stdio.h> 
int main (void)
{
    float a,b,c,d;
    a=25;
    b=25.25;
    c=25.123456;
    d=25.123456789;
    printf("a = %f\n",a); // Output: a = 25.000000
    printf("b = %f\n",b); // Output: b = 25.250000
    printf("c = %f\n",c); // Output: c = 25.123455
    printf("d = %f\n",d); // Output: d = 25.123457
    printf("a = %7.2f\n",a); // Output: a =   25.00
    printf("b = %7.3f\n",b); // Output: b =  25.250
    printf("c = %7.0f\n",c); // Output: c =      25
    printf("d = %7.4f\n",d); // Output: d = 25.1235
}
