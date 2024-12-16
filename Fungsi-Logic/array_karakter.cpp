#include <stdio.h>
#include <string.h>

int main(void) {
    char nama[] = "Mulyadi Oscar";
    printf("%s\n", nama); // Output: Mulyadi Oscar
    printf("%c\n", nama[0]); // Output: M
    printf("%c\n", nama[8]); // Output: O

    char name[15];
    strcpy(name, "Jennifer Lopez");
    printf("%s\n", name); // Output: Jennifer Lopez
    printf("%c\n", name[0]); // Output: J
    printf("%c\n", name[7]); // Output: e

    char kalimatA[35];
    char kalimatB[35];
    strcpy(kalimatA, "Kota Yogyakarta");
    strcpy(kalimatB, kalimatA);
    strupr(kalimatA); // Mengubah ke huruf besar
    printf("%s\n", kalimatA); // Output: KOTA YOGYAKARTA
    strlwr(kalimatA); // Mengubah kembali ke huruf kecil
    printf("%s\n", kalimatA); // Output: kota yogyakarta
    printf("%d\n", strcmp(kalimatA, kalimatB)); // Output: 0
    strcat(kalimatB, " Never Ending Asia");
    printf("%s\n", kalimatB); // Output: Kota Yogyakarta Never Ending Asia
}