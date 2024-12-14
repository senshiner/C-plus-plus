#include <iostream>
using namespace std;

// fungsi (&) mendapatkan alamat variabel
int main(void) {
    int a[7];  // Array a dengan 7 elemen, tetapi belum diinisialisasi dengan nilai

    // Menampilkan alamat a[0]
    cout << "Alamat a[0] = " << &a[0] << endl;

    // Menampilkan alamat a[1]
    cout << "Alamat a[1] = " << &a[1] << endl;

    // Menampilkan alamat a[2]
    cout << "Alamat a[2] = " << &a[2] << endl;

    // Karena array a tidak diinisialisasi, nilai dari a[0], a[1], dll. tidak diketahui
    // Namun, alamat dari elemen tetap valid meskipun nilainya belum diatur
}