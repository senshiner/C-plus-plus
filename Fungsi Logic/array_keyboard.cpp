#include <iostream>
using namespace std;

int main(void) {
    // Input dan output array 1 dimensi
    int x = 0, b[5]; // Deklarasi variabel x untuk iterasi dan array b ukuran 5
    while (x < 5) { // Loop untuk mengisi array b
        cout << "b[" << x << "]="; // Meminta input untuk setiap elemen array
        cin >> b[x]; // Membaca nilai input ke elemen array b[x]
        x++; // Increment x
    }
    cout << endl << "Isi array b adalah :" << endl; // Menampilkan judul output array
    for (x = 0; x < 5; x++) // Loop untuk mencetak nilai setiap elemen array
        cout << "b[" << x << "]=" << b[x] << endl; // Menampilkan elemen array
    cout << endl;

    // Input dan output array 2 dimensi
    int i, j, a[2][3]; // Deklarasi variabel untuk iterasi dan array 2D ukuran 2x3
    for (i = 0; i <= 1; i++) { // Loop baris array
        for (j = 0; j <= 2; j++) { // Loop kolom array
            cout << "a[" << i << "][" << j << "]="; // Meminta input untuk setiap elemen array 2D
            cin >> a[i][j]; // Membaca nilai input ke elemen array a[i][j]
        }
    }
    cout << endl << "Isi array a adalah :" << endl;
    for (i = 0; i <= 1; i++) { // Loop untuk baris array
        for (j = 0; j <= 2; j++) { // Loop untuk kolom array
            cout << "a[" << i << "][" << j << "]=" << a[i][j] << endl; // Menampilkan elemen array 2D
        }
    }

    return 0;
}