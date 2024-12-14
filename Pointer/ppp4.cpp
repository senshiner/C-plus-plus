#include<iostream>
using namespace std;

// fungsi (*) membuka variabel dan melihat isi di dalamnya
int main(void) {
    // Pointer P untuk menunjuk elemen dalam array A
    int *P;
    // Array A dengan 5 elemen
    int A[5] = {2, 1, 7, 0, 5};

    // Pointer P menunjuk ke elemen pertama array A (A[0])
    P = A;

    // Increment nilai elemen yang ditunjuk oleh P (A[0])
    cout << ++*P << endl;  // Output: 3 (nilai A[0] = 2 di-increment menjadi 3)

    // Menampilkan nilai elemen pertama array setelah increment
    cout << *P << endl;    // Output: 3 (nilai A[0] tetap 3 setelah increment)
}