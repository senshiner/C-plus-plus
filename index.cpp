#include <stdio.h>

int main() {
    // \n sebagai enter pada Output
    
    // %d digunakan untuk mencetak nilai bertipe integer dalam format desimal
    printf("%d\n", 5);  // Output: 5
    
    // %s digunakan untuk mencetak sebuah string (array karakter)
    printf("%s\n", "Hello World");  // Output: Hello World
    
    // %f digunakan untuk mencetak nilai floating point (bilangan desimal)
    printf("%f\n", 3.14);  // Output: 3.140000
    
    // %c digunakan untuk mencetak karakter tunggal
    printf("%c\n", 'A');  // Output: A
    
    // %p digunakan untuk mencetak alamat memori (pointer)
    int x = 10;  // Variabel diperlukan untuk mendapatkan alamat memori
    printf("%p\n", &x);  // Output: Alamat memori variabel x
    
    // %x digunakan untuk mencetak nilai dalam format hexadecimal (huruf kecil)
    printf("%x\n", 255);  // Output: ff
    
    // %X digunakan untuk mencetak nilai dalam format hexadecimal (huruf besar)
    printf("%X\n", 255);  // Output: FF
    
    // %u digunakan untuk mencetak unsigned integer (integer tanpa tanda negatif)
    printf("%u\n", 5);  // Output: 5
    
    // %lf digunakan untuk mencetak nilai bertipe double (floating point presisi tinggi)
    printf("%lf\n", 3.14159265359);  // Output: 3.141593
    
    // %o digunakan untuk mencetak nilai dalam format oktal (basis 8)
    printf("%o\n", 8);  // Output: 10

    return 0;
}