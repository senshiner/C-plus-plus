#include <iostream>
using namespace std;

int main() {
    // while dengan continue
    int i = 0; // Inisialisasi variabel i
    while (i < 5) { // Kondisi loop: selama i < 5
        if (i == 3) { // Jika i sama dengan 3
            i++; // Increment i untuk menghindari loop tak berakhir
            continue; // Lewati iterasi saat i == 3
        }
        cout << i << endl; // Output nilai i jika kondisi continue tidak terpenuhi
        i++; // Increment variabel i
    }
    // Output: 0, 1, 2, 4
    cout << endl;

    // for dengan continue
    int j; // Deklarasi variabel j
    for (j = 0; j <= 5; j++) { // Loop for: j dari 0 hingga 5
        if (j == 3) // Jika j sama dengan 3
            continue; // Lewati iterasi saat j == 3
        cout << j << endl; // Output nilai j jika kondisi continue tidak terpenuhi
    }
    // Output: 0, 1, 2, 4, 5
    cout << endl;

    // for dengan break
    int k; // Deklarasi variabel k
    for (k = 0; k <= 5; k++) { // Loop for: k dari 0 hingga 5
        if (k == 3) // Jika k sama dengan 3
            break; // Hentikan loop sepenuhnya
        cout << k << endl; // Output nilai k jika kondisi break belum terpenuhi
    }
    // Output: 0, 1, 2
    cout << endl;

    // while dengan bilangan ganjil saja
    int x = 0; // Inisialisasi variabel x
    while (x <= 10) { // Kondisi loop: selama x <= 10
        if (x % 2 == 0) { // Jika x adalah bilangan genap
            x++; // Increment variabel x
            continue; // Lewati sisa iterasi untuk bilangan genap
        }
        cout << x << endl; // Output hanya bilangan ganjil
        x++; // Increment variabel x
    }
    // Output: 1, 3, 5, 7, 9
    cout << endl;

    // nested loop dengan continue
    for (int m = 1; m <= 3; m++) { // Loop luar: m dari 1 hingga 3
        for (int n = 1; n <= 3; n++) { // Loop dalam: n dari 1 hingga 3
            if (n == 2) // Jika n == 2
                continue; // Lewati iterasi untuk n == 2
            cout << "m: " << m << ", n: " << n << endl; // Output kombinasi m dan n
        }
    }
    // Output:
    // m: 1, n: 1
    // m: 1, n: 3
    // m: 2, n: 1
    // m: 2, n: 3
    // m: 3, n: 1
    // m: 3, n: 3
    cout << endl;

    // infinite loop dengan continue dan break
    int y = 0; // Inisialisasi variabel y
    while (true) { // Loop tanpa kondisi berhenti
        if (y == 3) { // Jika y == 3
            y++; // Increment y
            continue; // Lewati sisa iterasi ini
        }
        if (y > 5) // Jika y > 5
            break; // Hentikan loop
        cout << y << endl; // Output nilai y
        y++; // Increment y
    }
    // Output: 0, 1, 2, 4, 5
    cout << endl;

    return 0;
}