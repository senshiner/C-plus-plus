#include <stdio.h> 
int main (void)
{
    short a,b,c,d;
    //Batas angka short -32768 s/d 32767
    a= -32768;
    b= -32769; // output 32767 karna lewat batas
    c= 32767;
    d= 32768; // output -32768 karna lewat batas
    printf("a = %i\n",a);
    printf("b = %i\n",b);
    printf("c = %i\n",c);
    printf("d = %i\n",d);
}
