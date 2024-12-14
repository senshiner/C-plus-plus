#include<iostream>
using namespace std;

// fungsi (* ) membuka variabel dan melihat isi di dalamnya
int main(void) {
    // Pointer P untuk menunjuk elemen dalam array A
    int *P;
    // Array A dengan 5 elemen
    int A[5] = {2, 1, 7, 0, 5};

    // Pointer P menunjuk ke elemen pertama array A (A[0])
    P = A;

    // Menampilkan nilai elemen yang ditunjuk oleh P, lalu increment pointer P ke elemen berikutnya
    cout << *P++ << endl;  // Output: 2 (nilai dari A[0]), P maju ke A[1]

    // Menampilkan nilai elemen yang sekarang ditunjuk oleh P (setelah increment)
    cout << *P << endl;    // Output: 1 (nilai dari A[1])
}