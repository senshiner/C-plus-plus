#include <iostream>
using namespace std;

// ===== Deklarasi fungsi dari file lain =====
void mahasiswa();
void dosen();
void matkul();
void program_studi();
void jadwal();
void nilai();

// ===== Program Utama =====
int main() {
    int pilihan;

    do {
        cout << "======================================" << endl;
        cout << "        SISTEM UNIVERSITAS" << endl;
        cout << "======================================" << endl;
        cout << "1. Mahasiswa" << endl;
        cout << "2. Dosen" << endl;
        cout << "3. Mata Kuliah" << endl;
        cout << "4. Program Studi" << endl;
        cout << "5. Jadwal Kuliah" << endl;
        cout << "6. Nilai Mahasiswa" << endl;
        cout << "7. Keluar" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Pilih menu (1-7): ";
        cin >> pilihan;

        cout << endl;

        switch (pilihan) {
            case 1:
                mahasiswa();
                break;
            case 2:
                dosen();
                break;
            case 3:
                matkul();
                break;
            case 4:
                program_studi();
                break;
            case 5:
                jadwal();
                break;
            case 6:
                nilai();
                break;
            case 7:
                cout << "Terima kasih telah menggunakan sistem ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }

        cout << endl;
    } while (pilihan != 7);

    return 0;
}

