#include<iostream>
using namespace std;
// fungsi (&) mendapatkan alamat variabel
// fungsi (* ) membuka variabel dan melihat isi di dalamnya
int main(void) {
    // Pointer untuk menunjuk ke elemen-elemen array
    int *pTgl, *pTgl2;
    // Array tglLahir dengan nilai 24, 6, dan 65
    int tglLahir[] = {24, 6, 65};

    // Pointer pTgl menunjuk ke awal array tglLahir (tglLahir[0])
    pTgl = tglLahir;
    // Pointer pTgl2 menunjuk ke elemen kedua dalam array (alamat tglLahir[1])
    pTgl2 = &tglLahir[1];

    // Menampilkan isi array tglLahir menggunakan pointer
    for (int i = 1; i <= 3; i++) {
        cout << *pTgl << endl;  // Output: nilai elemen yang ditunjuk oleh pTgl
        pTgl++;                 // Pointer pTgl maju ke elemen berikutnya
    }

    // Menampilkan elemen yang ditunjuk oleh pTgl2
    cout << *pTgl2 << endl;      // Output: 6 (nilai elemen kedua dari tglLahir)

    // Menampilkan elemen berikutnya setelah elemen yang ditunjuk oleh pTgl2
    cout << *(pTgl2 + 1) << endl; // Output: 65 (nilai elemen ketiga dari tglLahir)
}