#include <stdio.h> 
int main (void)
{
    printf("Jakarta\n"); // Output: Jakarta
    puts("Jakarta"); // Output: Jakarta
    printf("%s","Jakarta\n"); // Output: Jakarta
    
    printf("Jakarta\nBali\n"); /* Output: Jakarta
                                            Bali */
    printf("Jakarta\bBali\n"); // Output: JakartBali
    printf("Jakarta\rBali\n"); // Output: Balirta
    printf("Jakarta\\Bali\n"); // Output: Jakarta\Bali
    printf("Jakarta\'Bali\n"); // Output: Jakarta'Bali
    printf("Jakarta\t\tBali\n"); // Output: Jakarta         Bali
    printf("Jakarta\"Bali\n"); // Output: Jakarta"Bali
}
