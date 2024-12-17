#include <iostream>
#include <cmath> // Untuk fungsi pow()
using namespace std;

int main() {
    // Loop Increment (i++)
    cout << "Loop Increment (i++)" << endl;
    int i = 1; // Inisialisasi variabel
    // Sintaks do-while:
    // 1. Blok `do` akan dijalankan minimal satu kali, meskipun kondisi `while` bernilai false.
    // 2. Eksekusi dilakukan di dalam blok `do` terlebih dahulu, baru kemudian memeriksa kondisi `while`.
    do { 
        cout << i << endl; // Perintah yang dijalankan dalam loop
        i++; // Increment variabel
    } while (i <= 5); // Kondisi di akhir loop, dicek setelah blok `do` selesai
    // Output: 1, 2, 3, 4, 5
    cout << endl;

    // Loop Decrement (--i)
    cout << "Loop Decrement (--i):" << endl;
    i = 5;
    do {
        cout << i << endl; // Output: 5,4,3,2,1
        --i;
    } while (i > 0);
    cout << endl;

    // do-while Loop dengan Post-Increment (o++)
    cout << "do-while Loop dengan Post-Increment:" << endl;
    int o = 1;
    do {
        cout << o++ << endl; // Output: 1, 2, 3, 4
    } while (o < 5);
    cout << endl;

    // do-while Loop dengan Pre-Increment (++o)
    cout << "do-while Loop dengan Pre-Increment:" << endl;
    int p = 1;
    do {
        cout << ++p << endl; // Output: 2, 3, 4, 5
    } while (p < 5);
    cout << endl;

    // Loop dengan Operasi Perkalian (*=)
    cout << "Loop dengan Operasi Perkalian (*=):" << endl;
    i = 1;
    do {
        cout << i << endl; // Output: 1,2,4,8,16,32,64
        i *= 2;
    } while (i <= 100);
    cout << endl;

    // Loop dengan Operasi Pembagian (/=)
    cout << "Loop dengan Operasi Pembagian (/=):" << endl;
    i = 100;
    do {
        cout << i << endl;
        i /= 2; // Nilai i terus dibagi 2 hingga menjadi 1
    } while (i >= 1);
    cout << endl;

    // Loop dengan Operasi Pangkat (pow)
    cout << "Loop dengan Operasi Pangkat (pow):" << endl;
    i = 0;
    do {
        cout << "2^" << i << " = " << pow(2, i) << endl; // Output: 1,2,4,8,16
        i++;
    } while (i <= 4);
    cout << endl;

    // Loop dengan Modulus (%)
    cout << "Loop dengan Modulus (%):" << endl;
    i = 1;
    do {
        if (i % 2 == 0)
            cout << i << " adalah bilangan genap" << endl; // Output: bilangan genap
        else
            cout << i << " adalah bilangan ganjil" << endl; // Output: bilangan ganjil
        i++;
    } while (i <= 10);
    cout << endl;

    // Loop dengan Operasi di Blok
    cout << "Loop dengan Operasi di Blok:" << endl;
    int h = 1;
    do {
        cout << h + 1 << endl; 
        h++;
    } while (h <= 5); // Output: 2,3,4,5,6
    cout << endl;

    // Nested Loop (bintang segitiga)
    cout << "Nested Loop (bintang segitiga):" << endl;
    int e = 1;
    do {
        int j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= e);
        cout << endl;
        e++;
    } while (e <= 5);
    cout << endl;

    // Loop dengan Kondisi break
    cout << "Loop dengan Kondisi break:" << endl;
    i = 1;
    do {
        if (i == 5) break; // Loop berhenti ketika i == 5
        cout << i << endl; // Output: 1,2,3,4
        i++;
    } while (i <= 10);
    cout << endl;

    // Loop dengan Kondisi continue
    cout << "Loop dengan Kondisi continue:" << endl;
    i = 1;
    do {
        if (i % 2 == 0) {
            i++;
            continue; // Lewati iterasi jika i genap
        }
        cout << i << endl; // Output: 1,3,5,7,9
        i++;
    } while (i <= 10);
    cout << endl;

    // Infinite Loop dengan break
    cout << "Infinite Loop dengan break:" << endl;
    i = 1;
    do {
        if (i > 5) break; // Hentikan loop secara manual
        cout << i << endl; // Output: 1,2,3,4,5
        i++;
    } while (true);
    cout << endl;

    // Loop dengan Iterasi Berganda
    cout << "Loop dengan Iterasi Berganda (i dan j):" << endl;
    i = 1;
    int j = 10;
    do {
        cout << "i: " << i << ", j: " << j << endl; 
        // Output: i: 1, j: 10; i: 2, j: 9; dst.
        i++;
        j--;
    } while (i <= 5 && j >= 5);
    cout << endl;

    return 0;
}