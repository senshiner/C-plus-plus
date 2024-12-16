#include <iostream>
using namespace std;

int main(void) {
    int x, s; // Deklarasi variabel x,s integer
    cout << "Masukan Bilangan Bulat: ";
    cin >> x; // Input angka x
    s = x % 2; // Variabel s = sisa pembagian x dengan 2 (modulus)

    // Struktur if-else
    if (s == 0) // Kondisi: jika s (sisa pembagian x dengan 2) sama dengan 0
        cout << "Bilangan Genap" << endl; // Jika kondisi terpenuhi, menampilkan "Bilangan Genap"
    else // Jika kondisi tidak terpenuhi
        cout << "Bilangan Ganjil" << endl; // Menampilkan "Bilangan Ganjil"

    return 0;
}