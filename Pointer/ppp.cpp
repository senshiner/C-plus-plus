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

    // Menampilkan nilai elemen pertama array A yang ditunjuk oleh P
    cout << *P << endl;  // Output: 2 (nilai dari A[0])

    // Pointer P maju ke elemen berikutnya (A[1])
    P++;

    // Menampilkan nilai elemen kedua array A yang sekarang ditunjuk oleh P
    cout << *P << endl;  // Output: 1 (nilai dari A[1])
}