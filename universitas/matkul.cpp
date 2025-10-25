#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MataKuliah {
    string kodeMK;
    string namaMK;
    int sks;
    string dosenPengampu;
};

const int MAX_MK = 100;
MataKuliah dataMK[MAX_MK];
int jumlahMK = 8;

// ===== Inisialisasi Data Mata Kuliah =====
void inisialisasiMK() {
    dataMK[0] = {"IF101", "Algoritma dan Pemrograman", 3, "Dr. Ahmad Syafiq"};
    dataMK[1] = {"IF102", "Struktur Data", 3, "Prof. Rina Setiawan"};
    dataMK[2] = {"IF201", "Basis Data", 3, "Ir. Bambang Hartono"};
    dataMK[3] = {"IF202", "Pemrograman Web", 3, "Dr. Siti Marlina"};
    dataMK[4] = {"IF203", "Sistem Operasi", 3, "Ir. Hadi Kurniawan"};
    dataMK[5] = {"IF301", "Jaringan Komputer", 3, "Ir. Bambang Hartono"};
    dataMK[6] = {"IF302", "Rekayasa Perangkat Lunak", 3, "Prof. Rina Setiawan"};
    dataMK[7] = {"IF401", "Kecerdasan Buatan", 3, "Dr. Ahmad Syafiq"};
}

// ===== Fungsi: Tambah Mata Kuliah =====
void tambahMK() {
    if (jumlahMK >= MAX_MK) {
        cout << "Data mata kuliah sudah penuh!" << endl;
        return;
    }

    MataKuliah mk;
    cout << "\n=== Tambah Mata Kuliah Baru ===" << endl;
    cout << "Kode MK         : "; 
    cin >> mk.kodeMK;
    cin.ignore();
    cout << "Nama Mata Kuliah: "; 
    getline(cin, mk.namaMK);
    cout << "SKS             : "; 
    cin >> mk.sks;
    cin.ignore();
    cout << "Dosen Pengampu  : "; 
    getline(cin, mk.dosenPengampu);

    dataMK[jumlahMK++] = mk;

    cout << "\n✅ Mata kuliah berhasil ditambahkan!" << endl;
}

// ===== Fungsi: Lihat Daftar Mata Kuliah =====
void tampilMK() {
    cout << "\n=== Daftar Mata Kuliah ===" << endl;
    cout << left << setw(10) << "Kode MK"
         << setw(35) << "Nama Mata Kuliah"
         << setw(10) << "SKS"
         << setw(25) << "Dosen Pengampu" << endl;
    cout << string(80, '-') << endl;

    for (int i = 0; i < jumlahMK; i++) {
        cout << left << setw(10) << dataMK[i].kodeMK
             << setw(35) << dataMK[i].namaMK
             << setw(10) << dataMK[i].sks
             << setw(25) << dataMK[i].dosenPengampu
             << endl;
    }
}

// ===== Fungsi Utama Menu Mata Kuliah =====
void matkul() {
    static bool sudahInisialisasi = false;
    if (!sudahInisialisasi) {
        inisialisasiMK();
        sudahInisialisasi = true;
    }

    int pilih;
    do {
        cout << "\n===== MENU MATA KULIAH =====" << endl;
        cout << "1. Lihat Daftar Mata Kuliah" << endl;
        cout << "2. Tambah Mata Kuliah" << endl;
        cout << "3. Kembali ke Menu Utama" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tampilMK();
                break;
            case 2:
                tambahMK();
                break;
            case 3:
                cout << "Kembali ke menu utama..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilih != 3);
}
