#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <limits>

namespace fs = std::filesystem;
using namespace std;

void clear_input() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showMenu() {
    cout << "\n=== SISTEM BERKAS SEDERHANA ===\n";
    cout << "1. Buat file baru\n";
    cout << "2. Daftar file (di folder kerja)\n";
    cout << "3. Baca isi file\n";
    cout << "4. Hapus file\n";
    cout << "5. Ganti nama file\n";
    cout << "6. Keluar\n";
    cout << "Pilih (1-6): ";
}

void createFile() {
    string filename;
    cout << "Masukkan nama file (contoh: data.txt): ";
    clear_input();
    getline(cin, filename);

    if (filename.empty()) {
        cout << "Nama file tidak boleh kosong.\n";
        return;
    }

    if (fs::exists(filename)) {
        cout << "File sudah ada. Apakah ingin menimpa? (y/n): ";
        char c; cin >> c;
        if (c != 'y' && c != 'Y') return;
        clear_input();
    }

    cout << "Masukkan isi file (akhir dengan 'done'):\n";
    ofstream ofs(filename, ios::trunc);
    if (!ofs) {
        cout << "Gagal membuat file.\n";
        return;
    }

    string line;
    while (true) {
        getline(cin, line);
        if (line == "done") break;
        ofs << line << '\n';
    }

    ofs.close();
    cout << "File '" << filename << "' berhasil disimpan.\n";
}

void listFiles() {
    cout << "\nDaftar file di folder kerja:\n";
    int count = 0;
    try {
        for (const auto& entry : fs::directory_iterator(fs::current_path())) {
            if (entry.is_regular_file()) {
                cout << entry.path().filename().string() << '\n';
                ++count;
            }
        }
    } catch (const fs::filesystem_error& e) {
        cout << "Error membaca folder: " << e.what() << '\n';
        return;
    }
    if (count == 0) cout << "(Tidak ada file di folder ini)\n";
}

void readFile() {
    string filename;
    cout << "Masukkan nama file yang akan dibaca: ";
    clear_input();
    getline(cin, filename);

    if (!fs::exists(filename)) {
        cout << "File tidak ditemukan.\n";
        return;
    }

    ifstream ifs(filename);
    if (!ifs) {
        cout << "Gagal membuka file.\n";
        return;
    }

    cout << "\n--- Isi file: " << filename << " ---\n";
    string line;
    while (getline(ifs, line)) {
        cout << line << '\n';
    }
    cout << "--- Akhir file ---\n";
    ifs.close();
}

void deleteFile() {
    string filename;
    cout << "Masukkan nama file yang akan dihapus: ";
    clear_input();
    getline(cin, filename);

    if (!fs::exists(filename)) {
        cout << "File tidak ditemukan.\n";
        return;
    }

    cout << "Yakin ingin menghapus '" << filename << "'? (y/n): ";
    char c; cin >> c;
    if (c == 'y' || c == 'Y') {
        try {
            fs::remove(filename);
            cout << "File dihapus.\n";
        } catch (const fs::filesystem_error& e) {
            cout << "Gagal menghapus file: " << e.what() << '\n';
        }
    } else {
        cout << "Batal menghapus.\n";
    }
}

void renameFile() {
    string oldname, newname;
    cout << "Masukkan nama file lama: ";
    clear_input();
    getline(cin, oldname);

    if (!fs::exists(oldname)) {
        cout << "File tidak ditemukan.\n";
        return;
    }

    cout << "Masukkan nama file baru: ";
    getline(cin, newname);
    if (newname.empty()) {
        cout << "Nama baru tidak boleh kosong.\n";
        return;
    }

    try {
        fs::rename(oldname, newname);
        cout << "File berhasil diganti nama menjadi '" << newname << "'\n";
    } catch (const fs::filesystem_error& e) {
        cout << "Gagal mengganti nama file: " << e.what() << '\n';
    }
}

int main() {
    while (true) {
        showMenu();
        int choice;
        if (!(cin >> choice)) {
            cout << "Input tidak valid. Masukkan angka 1-6.\n";
            clear_input();
            continue;
        }
switch (choice) {
            case 1: createFile(); break;
            case 2: listFiles(); break;
            case 3: readFile(); break;
            case 4: deleteFile(); break;
            case 5: renameFile(); break;
            case 6: cout << "Keluar. Sampai jumpa!\n"; return 0;
            default: cout << "Pilihan tidak dikenal.\n";
        }
    }
}
