#include <stdio.h> 
int main (void)
{
    unsigned short a,b,c,d;
    // Batas angka unsigned short 0 s/d 65535
    a= 0;
    b= -1; // output 65535 karna lewat batas
    c= 65535;
    d= 65536; // output 0 karna lewat batas
    printf("a = %u\n",a);
    printf("b = %u\n",b);
    printf("c = %u\n",c);
    printf("d = %u\n",d);
}
