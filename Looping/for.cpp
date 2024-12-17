#include <iostream>
#include <cmath> // Untuk fungsi pow()
using namespace std;

int main() {
    // Loop Increment (i++)
    cout << "Loop Increment (i++)" << endl;
    for (int i = 1; i <= 5; i++) 
        cout << i << endl; // Output: 1,2,3,4,5
    cout << endl;

    // Loop Decrement (--i)
    cout << "Loop Decrement (--i):" << endl;
    for (int i = 6; i > 0; --i) 
        cout << i << endl; // Output: 5,4,3,2,1
    cout << endl;

    // Loop dengan Operasi Perkalian (*=)
    cout << "Loop dengan Operasi Perkalian (*=):" << endl;
    for (int i = 1; i <= 100; i *= 2) 
        cout << i << endl; // Output: 1,2,4,8,16,32,64
    cout << endl;

    // Loop dengan Operasi Pembagian (/=)
    cout << "Loop dengan Operasi Pembagian (/=)" << endl;
    for (int i = 100; i >= 1; i /= 2) { 
        cout << i << endl; 
        // Output: Nilai i terus dibagi 2 hingga menjadi 1
    }
    cout << endl;
    
    // Loop dengan Operasi Pangkat (pow)
    cout << "Loop dengan Operasi Pangkat (pow):" << endl;
    for (int i = 0; i <= 4; i++) 
        cout << "2^" << i << " = " << pow(2, i) << endl; // Output: 1,2,4,8,16
    cout << endl;

    // Loop dengan Modulus (%)
    cout << "Loop dengan Modulus (%):" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) 
            cout << i << " adalah bilangan genap" << endl; // Output: bilangan genap
        else 
            cout << i << " adalah bilangan ganjil" << endl; // Output: bilangan ganjil
    }
    cout << endl;

    // Loop Tanpa Inisialisasi di Dalam for
    cout << "Loop Tanpa Inisialisasi (variable di luar):" << endl;
    int k = 0;
    for (; k <= 10;) {
        k++;
        cout << k << endl; // Output: 1,2,3,4,5,6,7,8,9,10,11
    }
    cout << endl;

    // Loop dengan Operasi di Blok
    cout << "Loop dengan Operasi di Blok:" << endl;
    for (int h = 1; h <= 5;) {
        cout << h + 1 << endl; 
        h++;
    } // Output: 2,3,4,5,6
    cout << endl;

    // Nested Loop (bintang segitiga)
    cout << "Nested Loop (bintang segitiga):" << endl;
    for (int e = 1; e <= 5; e++) 
        for (int j = 1; j <= e; j++) 
            cout << "*"; 
    cout << endl; // Output: *************** (15 *)
    cout << endl;

    // Loop dengan Kondisi break
    cout << "Loop dengan Kondisi break:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break; // Loop berhenti ketika i == 5
        cout << i << endl; // Output: 1,2,3,4
    }
    cout << endl;

    // Loop dengan Kondisi continue
    cout << "Loop dengan Kondisi continue:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue; // Lewati iterasi jika i genap
        cout << i << endl; // Output: 1,3,5,7,9
    }
    cout << endl;

    // Infinite Loop dengan break
    cout << "Infinite Loop dengan break:" << endl;
    for (int i = 1;; i++) { // Tanpa kondisi di dalam for
        if (i > 5) break; // Hentikan loop secara manual
        cout << i << endl; // Output: 1,2,3,4,5
    }
    cout << endl;

    // Loop dengan Iterasi Berganda
    cout << "Loop dengan Iterasi Berganda (i dan j):" << endl;
    for (int i = 1, j = 10; i <= 5 && j >= 5; i++, j--) {
        cout << "i: " << i << ", j: " << j << endl; // Output: i: 1, j: 10; i: 2, j: 9; dst.
    }
    cout << endl;

    return 0;
}