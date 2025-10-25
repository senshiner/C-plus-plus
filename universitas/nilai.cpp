#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Nilai {
    string nim;
    string kodeMK;
    char nilaiHuruf;
};

const int MAX_NILAI = 100;
Nilai dataNilai[MAX_NILAI];
int jumlahNilai = 8;

// ===== Inisialisasi Data Nilai =====
void inisialisasiNilai() {
    dataNilai[0] = {"231001", "TI101", 'A'};
    dataNilai[1] = {"231001", "TI102", 'B'};
    dataNilai[2] = {"231002", "SI101", 'A'};
    dataNilai[3] = {"231002", "SI102", 'C'};
    dataNilai[4] = {"231003", "MI101", 'B'};
    dataNilai[5] = {"231004", "AK101", 'A'};
    dataNilai[6] = {"231005", "MN101", 'B'};
    dataNilai[7] = {"231006", "TE101", 'A'};
}

// ===== Input Nilai Mahasiswa =====
void inputNilai() {
    if (jumlahNilai >= MAX_NILAI) {
        cout << "Data nilai sudah penuh!\n";
        return;
    }

    Nilai n;
    cout << "\n=== Input Nilai Mahasiswa ===\n";
    cout << "NIM        : ";
    cin >> n.nim;
    cout << "Kode MK    : ";
    cin >> n.kodeMK;
    cout << "Nilai (A/B/C/D/E): ";
    cin >> n.nilaiHuruf;

    n.nilaiHuruf = toupper(n.nilaiHuruf);

    if (n.nilaiHuruf != 'A' && n.nilaiHuruf != 'B' && n.nilaiHuruf != 'C' &&
        n.nilaiHuruf != 'D' && n.nilaiHuruf != 'E') {
        cout << "⚠️ Nilai tidak valid! (gunakan A/B/C/D/E)\n";
        return;
    }

    dataNilai[jumlahNilai++] = n;
    cout << "\n✅ Nilai berhasil ditambahkan!\n";
}

// ===== Lihat Nilai per Mahasiswa =====
void lihatNilaiMahasiswa() {
    if (jumlahNilai == 0) {
        cout << "Belum ada data nilai.\n";
        return;
    }

    string cariNIM;
    bool ditemukan = false;

    cout << "\nMasukkan NIM mahasiswa: ";
    cin >> cariNIM;

    cout << "\n=== Daftar Nilai Mahasiswa (NIM: " << cariNIM << ") ===\n";
    cout << left
         << setw(5)  << "No"
         << setw(15) << "Kode MK"
         << setw(10) << "Nilai" << endl;
    cout << string(30, '-') << endl;

    int no = 1;
    for (int i = 0; i < jumlahNilai; i++) {
        if (dataNilai[i].nim == cariNIM) {
            cout << left
                 << setw(5)  << no++
                 << setw(15) << dataNilai[i].kodeMK
                 << setw(10) << dataNilai[i].nilaiHuruf
                 << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Mahasiswa dengan NIM " << cariNIM << " belum memiliki data nilai.\n";
    }
}

// ===== Menu Nilai =====
void nilai() {
    static bool sudahInisialisasi = false;
    if (!sudahInisialisasi) {
        inisialisasiNilai();
        sudahInisialisasi = true;
    }

    int pilihan;
    do {
        cout << "\n=== MENU NILAI / KHS MAHASISWA ===\n";
        cout << "1. Lihat Nilai Mahasiswa\n";
        cout << "2. Input Nilai Mahasiswa\n";
        cout << "3. Kembali ke Menu Utama\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                lihatNilaiMahasiswa();
                break;
            case 2:
                inputNilai();
                break;
            case 3:
                cout << "Kembali ke menu utama...\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 3);
}
