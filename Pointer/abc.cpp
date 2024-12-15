#include <iostream>
using namespace std;
// fungsi (&) mendapatkan alamat variabel
// fungsi (* ) membuka variabel dan melihat isi didalamnya
int main(void) {
    // Inisialisasi array 2D 'A' dengan nilai karakter
    char A[3][5] = {'A', 'B', 'C', 'D', 'E',
                    'F', 'G', 'H', 'I', 'J',
                    'K', 'L', 'M', 'N', 'O'};

    // Pointer P dengan karakter(char)
    // berati *P menunjuk isi P
    char *P;

    // array 2d ini berati baris index 0 dan kolom index 0 yaitu A jadi sama aja mencari &A
    P = &A[0][0];

    // Outputnya akan muncul isi alamat &A
    cout << *P << endl;
}
