#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string prodi;
    int semester;
    double ipk;
};

const int MAX_MHS = 100;
Mahasiswa dataMhs[MAX_MHS];
int jumlahMhs = 10;

// ===== Data Mahasiswa =====
void inisialisasiData() {
    dataMhs[0] = {"231001", "Arya Putra", "Teknik Informatika", 3, 3.45};
    dataMhs[1] = {"231002", "Budi Santoso", "Sistem Informasi", 2, 3.20};
    dataMhs[2] = {"231003", "Citra Dewi", "Teknik Komputer", 4, 3.75};
    dataMhs[3] = {"231004", "Dina Lestari", "Manajemen", 1, 3.10};
    dataMhs[4] = {"231005", "Eka Pratama", "Akuntansi", 2, 3.00};
    dataMhs[5] = {"231006", "Farhan Malik", "Teknik Elektro", 5, 3.88};
    dataMhs[6] = {"231007", "Gita Aulia", "Psikologi", 3, 3.55};
    dataMhs[7] = {"231008", "Hendra Wijaya", "Hukum", 4, 3.22};
    dataMhs[8] = {"231009", "Indah Lestari", "Teknik Sipil", 2, 3.60};
    dataMhs[9] = {"231010", "Joko Susanto", "Teknik Informatika", 6, 3.90};
}

// ===== Fungsi: Tambah Mahasiswa =====
void tambahMahasiswa() {
    if (jumlahMhs >= MAX_MHS) {
        cout << "Data sudah penuh!" << endl;
        return;
    }

    Mahasiswa m;
    cout << "\n=== Tambah Mahasiswa Baru ===" << endl;
    cout << "NIM        : "; cin >> m.nim;
    cin.ignore();
    cout << "Nama       : "; getline(cin, m.nama);
    cout << "Program Studi : "; getline(cin, m.prodi);
    cout << "Semester   : "; cin >> m.semester;
    cout << "IPK        : "; cin >> m.ipk;

    dataMhs[jumlahMhs++] = m;

    cout << "\nMahasiswa berhasil ditambahkan!" << endl;
}

// ===== Fungsi: Lihat Daftar Mahasiswa =====
void tampilMahasiswa() {
    cout << "\n=== Daftar Mahasiswa ===" << endl;
    cout << left << setw(10) << "NIM"
         << setw(20) << "Nama"
         << setw(25) << "Program Studi"
         << setw(10) << "Semester"
         << setw(5)  << "IPK" << endl;
    cout << string(70, '-') << endl;

    for (int i = 0; i < jumlahMhs; i++) {
        cout << left << setw(10) << dataMhs[i].nim
             << setw(20) << dataMhs[i].nama
             << setw(25) << dataMhs[i].prodi
             << setw(10) << dataMhs[i].semester
             << setw(5)  << fixed << setprecision(2) << dataMhs[i].ipk
             << endl;
    }
}

// ===== Fungsi: Cari Mahasiswa Berdasarkan NIM =====
void cariMahasiswa() {
    string cari;
    bool ditemukan = false;

    cout << "\nMasukkan NIM yang dicari: ";
    cin >> cari;

    for (int i = 0; i < jumlahMhs; i++) {
        if (dataMhs[i].nim == cari) {
            cout << "\nData ditemukan!\n";
            cout << "NIM        : " << dataMhs[i].nim << endl;
            cout << "Nama       : " << dataMhs[i].nama << endl;
            cout << "Program Studi : " << dataMhs[i].prodi << endl;
            cout << "Semester   : " << dataMhs[i].semester << endl;
            cout << "IPK        : " << dataMhs[i].ipk << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Mahasiswa dengan NIM " << cari << " tidak ditemukan." << endl;
    }
}

// ===== Fungsi Utama Menu Mahasiswa =====
void mahasiswa() {
    static bool sudahInisialisasi = false;
    if (!sudahInisialisasi) {
        inisialisasiData();
        sudahInisialisasi = true;
    }

    int pilih;
    do {
        cout << "\n===== MENU MAHASISWA =====" << endl;
        cout << "1. Lihat Daftar Mahasiswa" << endl;
        cout << "2. Tambah Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa" << endl;
        cout << "4. Kembali ke Menu Utama" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tampilMahasiswa();
                break;
            case 2:
                tambahMahasiswa();
                break;
            case 3:
                cariMahasiswa();
                break;
            case 4:
                cout << "Kembali ke menu utama..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilih != 4);
}
