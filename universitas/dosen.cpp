#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Dosen {
    string nip;
    string nama;
    string keahlian;
    string jabatan;
    string prodiPengajar;
};

const int MAX_DOSEN = 50;
Dosen dataDosen[MAX_DOSEN];
int jumlahDosen = 6;

// ===== Data Dosen =====
void inisialisasiDosen() {
    dataDosen[0] = {"19780101", "Dr. Ahmad Syafiq", "Pemrograman Web", "Lektor Kepala", "Teknik Informatika"};
    dataDosen[1] = {"19850412", "Prof. Rina Setiawan", "Sistem Basis Data", "Guru Besar", "Sistem Informasi"};
    dataDosen[2] = {"19890220", "Ir. Bambang Hartono", "Jaringan Komputer", "Lektor", "Teknik Komputer"};
    dataDosen[3] = {"19900315", "Dr. Siti Marlina", "Manajemen Proyek", "Asisten Ahli", "Manajemen"};
    dataDosen[4] = {"19870518", "Drs. Dedi Pratama", "Akuntansi Keuangan", "Lektor", "Akuntansi"};
    dataDosen[5] = {"19921210", "Ir. Hadi Kurniawan", "Elektronika Digital", "Asisten Ahli", "Teknik Elektro"};
}

// ===== Fungsi: Tambah Dosen =====
void tambahDosen() {
    if (jumlahDosen >= MAX_DOSEN) {
        cout << "Data dosen sudah penuh!" << endl;
        return;
    }

    Dosen d;
    cout << "\n=== Tambah Dosen Baru ===" << endl;
    cout << "NIP           : "; 
    cin >> d.nip;
    cin.ignore();
    cout << "Nama          : "; getline(cin, d.nama);
    cout << "Keahlian      : "; getline(cin, d.keahlian);
    cout << "Jabatan       : "; getline(cin, d.jabatan);
    cout << "Prodi Pengajar: "; getline(cin, d.prodiPengajar);

    dataDosen[jumlahDosen++] = d;

    cout << "\n✅ Dosen berhasil ditambahkan!" << endl;
}

// ===== Fungsi: Lihat Daftar Dosen =====
void tampilDosen() {
    cout << "\n=== Daftar Dosen ===" << endl;
    cout << left << setw(12) << "NIP"
         << setw(25) << "Nama"
         << setw(25) << "Keahlian"
         << setw(20) << "Jabatan"
         << setw(20) << "Prodi Pengajar" << endl;
    cout << string(100, '-') << endl;

    for (int i = 0; i < jumlahDosen; i++) {
        cout << left << setw(12) << dataDosen[i].nip
             << setw(25) << dataDosen[i].nama
             << setw(25) << dataDosen[i].keahlian
             << setw(20) << dataDosen[i].jabatan
             << setw(20) << dataDosen[i].prodiPengajar
             << endl;
    }
}

// ===== Fungsi: Cari Dosen Berdasarkan NIP atau Nama =====
void cariDosen() {
    string cari;
    bool ditemukan = false;

    cout << "\nMasukkan NIP atau Nama yang dicari: ";
    cin.ignore();
    getline(cin, cari);

    cout << "\n=== Hasil Pencarian Dosen ===" << endl;

    for (int i = 0; i < jumlahDosen; i++) {
        if (dataDosen[i].nip == cari || dataDosen[i].nama == cari) {
            cout << "------------------------------------------\n";
            cout << "NIP            : " << dataDosen[i].nip << endl;
            cout << "Nama           : " << dataDosen[i].nama << endl;
            cout << "Keahlian       : " << dataDosen[i].keahlian << endl;
            cout << "Jabatan        : " << dataDosen[i].jabatan << endl;
            cout << "Prodi Pengajar : " << dataDosen[i].prodiPengajar << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "❌ Dosen dengan NIP atau Nama \"" << cari << "\" tidak ditemukan." << endl;
    }
}

// ===== Fungsi Utama =====
void dosen() {
    static bool sudahInisialisasi = false;
    if (!sudahInisialisasi) {
        inisialisasiDosen();
        sudahInisialisasi = true;
    }

    int pilih;
    do {
        cout << "\n===== MENU DOSEN =====" << endl;
        cout << "1. Lihat Daftar Dosen" << endl;
        cout << "2. Tambah Dosen" << endl;
        cout << "3. Cari Dosen (NIP/Nama)" << endl;
        cout << "4. Kembali ke Menu Utama" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tampilDosen();
                break;
            case 2:
                tambahDosen();
                break;
            case 3:
                cariDosen();
                break;
            case 4:
                cout << "Kembali ke menu utama..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilih != 4);
}
