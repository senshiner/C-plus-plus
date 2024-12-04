#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    cout << "Masukkan elemen matriks A:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }

    cout << "Masukkan elemen matriks B:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }

    cout << "\nHasil penjumlahan matriks A dan B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
