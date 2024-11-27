#include <iostream>
using namespace std;

int main() {
    int mat1[2][2], mat2[2][2], hasil[2][2];

    cout << "Masukkan elemen Matriks A:\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> mat1[i][j];

    cout << "Masukkan elemen Matriks B:\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> mat2[i][j];

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            hasil[i][j] = mat1[i][j] + mat2[i][j];

    cout << "Hasil Penjumlahan Matriks A + B:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << hasil[i][j] << " ";
        cout << endl;
    }

    return 0;
}
