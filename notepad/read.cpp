#include <stdio.h>

main(void) {
    int akun;
    char nama[30];
    FILE *fp;
    fp=fopen("C:\\User\\Documents\\c++\\data.txt","r");
    fscanf(fp,"%d %s\n",&akun,nama);
    fclose(fp);
    printf("%d %s\n",akun,nama);
}
