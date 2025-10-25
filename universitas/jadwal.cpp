#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Jadwal {
    string hari;
    string jam;
    string mataKuliah;
    string dosen;
    string ruangan;
};

const int MAX_JADWAL = 100;
Jadwal dataJadwal[MAX_JADWAL];
int jumlahJadwal = 8;

// ===== Inisialisasi Data Jadwal =====
void inisialisasiJadwal() {
    dataJadwal[0] = {"Senin", "08:00 - 10:00", "Algoritma dan Pemrograman", "Dr. Andi Saputra", "R101"};
    dataJadwal[1] = {"Senin", "10:15 - 12:00", "Struktur Data", "Dr. Budi Santoso", "R102"};
    dataJadwal[2] = {"Selasa", "09:00 - 11:00", "Sistem Operasi", "Dr. Citra Lestari", "R201"};
    dataJadwal[3] = {"Rabu", "08:00 - 10:00", "Basis Data", "Dr. Dedi Suharto", "R202"};
    dataJadwal[4] = {"Rabu", "10:15 - 12:00", "Pemrograman Web", "Dr. Eko Prabowo", "R203"};
    dataJadwal[5] = {"Kamis", "13:00 - 15:00", "Jaringan Komputer", "Dr. Fajar Hidayat", "R301"};
    dataJadwal[6] = {"Jumat", "08:00 - 10:00", "Manajemen Proyek TI", "Dr. Gina Permata", "R302"};
    dataJadwal[7] = {"Jumat", "10:15 - 12:00", "Kecerdasan Buatan", "Dr. Hendra Wijaya", "R303"};
}

// ===== Tambah Jadwal =====
void tambahJadwal() {
    if (jumlahJadwal >= MAX_JADWAL) {
        cout << "Data jadwal sudah penuh!\n";
        return;
    }

    Jadwal j;
    cout << "\n=== Tambah Jadwal Kuliah ===\n";
    cin.ignore();
    cout << "Hari        : ";
    getline(cin, j.hari);
    cout << "Jam         : ";
    getline(cin, j.jam);
    cout << "Mata Kuliah : ";
    getline(cin, j.mataKuliah);
    cout << "Dosen       : ";
    getline(cin, j.dosen);
    cout << "Ruangan     : ";
    getline(cin, j.ruangan);

    dataJadwal[jumlahJadwal++] = j;

    cout << "\n✅ Jadwal kuliah berhasil ditambahkan!\n";
}

// ===== Lihat Daftar Jadwal =====
void lihatJadwal() {
    cout << "\n=== Daftar Jadwal Kuliah ===\n";

    if (jumlahJadwal == 0) {
        cout << "Belum ada data jadwal.\n";
        return;
    }

    cout << left
         << setw(5)  << "No"
         << setw(10) << "Hari"
         << setw(15) << "Jam"
         << setw(30) << "Mata Kuliah"
         << setw(25) << "Dosen"
         << setw(10) << "Ruangan" << endl;
    cout << string(95, '-') << endl;

    for (int i = 0; i < jumlahJadwal; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(10) << dataJadwal[i].hari
             << setw(15) << dataJadwal[i].jam
             << setw(30) << dataJadwal[i].mataKuliah
             << setw(25) << dataJadwal[i].dosen
             << setw(10) << dataJadwal[i].ruangan
             << endl;
    }
}

// ===== Menu Jadwal Kuliah =====
void jadwal() {
    static bool sudahInisialisasi = false;
    if (!sudahInisialisasi) {
        inisialisasiJadwal();
        sudahInisialisasi = true;
    }

    int pilihan;
    do {
        cout << "\n=== MENU JADWAL KULIAH ===\n";
        cout << "1. Lihat Daftar Jadwal\n";
        cout << "2. Tambah Jadwal\n";
        cout << "3. Kembali ke Menu Utama\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                lihatJadwal();
                break;
            case 2:
                tambahJadwal();
                break;
            case 3:
                cout << "Kembali ke menu utama...\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 3);
}
