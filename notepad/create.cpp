#include <stdio.h>

main(void) {
    int akun;
    char nama[30];
    FILE *fp;
    fp=fopen("C:\\User\\Documents\\c++\\data.txt","w");
    printf("Masukan akun, nama\n");
    scanf("%d%s",&akun,nama);
    fprintf(fp,"%d %s\n",akun,nama);
    fclose(fp);
}
