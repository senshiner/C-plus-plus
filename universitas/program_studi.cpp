#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct ProgramStudi {
    string kodeProdi;
    string namaProdi;
    string fakultas;
    string kaprodi;
};

// ====== Data ======
vector<ProgramStudi> daftarProdi = {
    {"TI01", "Teknik Informatika", "Fakultas Ilmu Komputer", "Dr. Andi Saputra"},
    {"SI02", "Sistem Informasi", "Fakultas Ilmu Komputer", "Dr. Budi Santoso"},
    {"DKV03", "Desain Komunikasi Visual", "Fakultas Seni dan Desain", "Dr. Citra Lestari"},
    {"MI04", "Manajemen Informatika", "Fakultas Ilmu Komputer", "Dr. Dedi Suharto"},
    {"AK05", "Akuntansi", "Fakultas Ekonomi dan Bisnis", "Dr. Eko Prabowo"},
    {"MN06", "Manajemen", "Fakultas Ekonomi dan Bisnis", "Dr. Fajar Hidayat"},
    {"PS07", "Psikologi", "Fakultas Psikologi", "Dr. Gina Permata"},
    {"HI08", "Hubungan Internasional", "Fakultas Ilmu Sosial", "Dr. Hendra Wijaya"},
    {"TE09", "Teknik Elektro", "Fakultas Teknik", "Dr. Intan Nurhaliza"},
    {"AR10", "Arsitektur", "Fakultas Teknik", "Dr. Joko Setiawan"}
};

// ====== Tambah Program Studi ======
void tambahProdi() {
    ProgramStudi p;
    cout << "\n=== Tambah Program Studi ===\n";
    cin.ignore();
    cout << "Kode Prodi     : ";
    getline(cin, p.kodeProdi);
    cout << "Nama Prodi     : ";
    getline(cin, p.namaProdi);
    cout << "Fakultas       : ";
    getline(cin, p.fakultas);
    cout << "Kaprodi        : ";
    getline(cin, p.kaprodi);

    daftarProdi.push_back(p);
    cout << "\n✅ Program studi berhasil ditambahkan!\n";
}

// ====== Lihat Daftar Program Studi ======
void lihatDaftarProdi() {
    cout << "\n=== Daftar Program Studi ===\n";

    if (daftarProdi.empty()) {
        cout << "Belum ada data program studi.\n";
        return;
    }

    cout << left 
         << setw(6)  << "No"
         << setw(10) << "Kode"
         << setw(30) << "Nama Prodi"
         << setw(35) << "Fakultas"
         << setw(25) << "Kaprodi" << endl;
    cout << string(106, '-') << endl;

    for (int i = 0; i < daftarProdi.size(); i++) {
        cout << left
             << setw(6)  << i + 1
             << setw(10) << daftarProdi[i].kodeProdi
             << setw(30) << daftarProdi[i].namaProdi
             << setw(35) << daftarProdi[i].fakultas
             << setw(25) << daftarProdi[i].kaprodi
             << endl;
    }
}

// ====== Menu Utama Program Studi ======
void program_studi() {
    int pilihan;
    do {
        cout << "\n=== MENU PROGRAM STUDI ===\n";
        cout << "1. Lihat Daftar Program Studi\n";
        cout << "2. Tambah Program Studi\n";
        cout << "3. Kembali ke Menu Utama\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                lihatDaftarProdi();
                break;
            case 2:
                tambahProdi();
                break;
            case 3:
                cout << "Kembali ke menu utama...\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 3);
}
