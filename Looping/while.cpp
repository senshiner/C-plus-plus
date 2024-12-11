#include <iostream>
#include <cmath> // Untuk fungsi pow()
using namespace std;

int main() {
    //Penjelasan: Pada while inisialisasi hanya boleh diluar while
    
    // Loop Increment (i++)
    cout << "Loop Increment (i++)" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << endl; // Output: 1,2,3,4,5
        i++;
    }
    cout << endl;

    // Loop Decrement (--i)
    cout << "Loop Decrement (--i):" << endl;
    i = 5;
    while (i > 0) {
        cout << i << endl; // Output: 5,4,3,2,1
        --i;
    }
    cout << endl;
    
    // While Loop dengan Post-Increment (o++)
    cout << "While Loop dengan Post-Increment:" << endl;
    int o = 1;
    while (o < 5) {
        cout << o++ << endl; // Output: 1, 2, 3, 4
    }
    cout << endl;
    
    // While Loop dengan Pre-Increment (++o)
    cout << "While Loop dengan Pre-Increment:" << endl;
    int p = 1;
    while (p < 5) {
        cout << ++p << endl; // Output: 2, 3, 4, 5
    }
    cout << endl;

    // Loop dengan Operasi Perkalian (*=)
    cout << "Loop dengan Operasi Perkalian (*=):" << endl;
    i = 1;
    while (i <= 100) {
        cout << i << endl; // Output: 1,2,4,8,16,32,64
        i *= 2;
    }
    cout << endl;

    // Loop dengan Operasi Pembagian (/=)
    cout << "Loop dengan Operasi Pembagian (/=)" << endl;
    i = 100;
    while (i >= 1) {
        cout << i << endl; 
        i /= 2; // Nilai i terus dibagi 2 hingga menjadi 1
    }
    cout << endl;

    // Loop dengan Operasi Pangkat (pow)
    cout << "Loop dengan Operasi Pangkat (pow):" << endl;
    i = 0;
    while (i <= 4) {
        cout << "2^" << i << " = " << pow(2, i) << endl; // Output: 1,2,4,8,16
        i++;
    }
    cout << endl;

    // Loop dengan Modulus (%)
    cout << "Loop dengan Modulus (%):" << endl;
    i = 1;
    while (i <= 10) {
        if (i % 2 == 0) 
            cout << i << " adalah bilangan genap" << endl; // Output: bilangan genap
        else 
            cout << i << " adalah bilangan ganjil" << endl; // Output: bilangan ganjil
        i++;
    }
    cout << endl;

    // Loop dengan Operasi di Blok
    cout << "Loop dengan Operasi di Blok:" << endl;
    int h = 1;
    while (h <= 5) {
        cout << h + 1 << endl; 
        h++;
    } // Output: 2,3,4,5,6
    cout << endl;

    // Nested Loop (bintang segitiga)
    cout << "Nested Loop (bintang segitiga):" << endl;
    int e = 1;
    while (e <= 5) {
        int j = 1;
        while (j <= e) {
            cout << "*";
            j++;
        }
        e++;
    }
    cout << endl; // Output: *************** (15 *)
    cout << endl;

    // Loop dengan Kondisi break
    cout << "Loop dengan Kondisi break:" << endl;
    i = 1;
    while (i <= 10) {
        if (i == 5) break; // Loop berhenti ketika i == 5
        cout << i << endl; // Output: 1,2,3,4
        i++;
    }
    cout << endl;

    // Loop dengan Kondisi continue
    cout << "Loop dengan Kondisi continue:" << endl;
    i = 1;
    while (i <= 10) {
        if (i % 2 == 0) {
            i++;
            continue; // Lewati iterasi jika i genap
        }
        cout << i << endl; // Output: 1,3,5,7,9
        i++;
    }
    cout << endl;

    // Infinite Loop dengan break
    cout << "Infinite Loop dengan break:" << endl;
    i = 1;
    while (true) { // Kondisi true akan membuat loop berjalan terus
        if (i > 5) break; // Hentikan loop secara manual
        cout << i << endl; // Output: 1,2,3,4,5
        i++;
    }
    cout << endl;

    // Loop dengan Iterasi Berganda
    cout << "Loop dengan Iterasi Berganda (i dan j):" << endl;
    i = 1;
    int j = 10;
    while (i <= 5 && j >= 5) {
        cout << "i: " << i << ", j: " << j << endl; 
        // Output: i: 1, j: 10; i: 2, j: 9; dst.
        i++;
        j--;
    }
    cout << endl;

    return 0;
}