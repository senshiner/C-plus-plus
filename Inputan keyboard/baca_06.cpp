#include <stdio.h>
// input 2x bilangan dan dikalikan
main(void) {
    int C,D,E;
    printf("Inputkan bilangan ke-1:");
    scanf("%i",&C);
    
    printf("Inputkan bilangan ke-2:");
    scanf("%i",&D);
    E=C*D;
    printf("%i*%i=%i\n",C,D,E);
    
	return 0;
}
