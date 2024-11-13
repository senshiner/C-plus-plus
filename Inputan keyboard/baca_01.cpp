#include <stdio.h>

int main(void) {
    char S[6];
    printf("Inputkan String:");
    
    gets(S); //fungsi gets sudah tidak dianjurkan
    printf("%s\n",S);
	
	return 0;
}
