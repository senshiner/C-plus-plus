#include <stdio.h>
// bisa memasukan banyak karakter tetapi hanya diambil awalnya saja
main(void) {
    char C;
    printf("Masukan sebuah karakter:");
    
    C=getchar();
    printf("%c\n",C);
	
	return 0;
}