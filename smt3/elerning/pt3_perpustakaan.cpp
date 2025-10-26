#include <iostream>
#include <string>
using namespace std;

const int MAX = 10; // max rak

struct Buku {
    int id;
    string judul;
};

Buku stackBuku[MAX];
int top = -1;          // index buku teratas

// Tambah buku Max 10
bool isFull()  { return top == MAX - 1; }
bool isEmpty() { return top == -1; }

void PUSH() {
    if (isFull()) {
        cout << "\nRak penuh! Tidak bisa menambah buku.\n";
        return;
    }
    Buku b;
    cout << "\nMasukkan ID Buku   : ";
    cin >> b.id;
    cin.ignore();
    cout << "Masukkan Judul Buku: ";
    getline(cin, b.judul);
    stackBuku[++top] = b;
    cout << "Buku berhasil ditambahkan.\n";
}

void POP() {
    if (isEmpty()) {
        cout << "\nRak kosong! Tidak ada buku untuk diambil.\n";
        return;
    }
    cout << "\nMengambil buku: [" << stackBuku[top].id
         << "] " << stackBuku[top].judul << endl;
    top--;
}

void PEEK() {
    if (isEmpty()) {
        cout << "\nRak kosong!\n";
        return;
    }
    cout << "\nBuku teratas: [" << stackBuku[top].id
         << "] " << stackBuku[top].judul << endl;
}

void DISPLAY() {
    if (isEmpty()) {
        cout << "\nRak kosong!\n";
        return;
    }
    cout << "\nIsi Rak (bawah -> atas):\n";
    for (int i = 0; i <= top; i++) {
        cout << i+1 << ". [" << stackBuku[i].id
             << "] " << stackBuku[i].judul << endl;
    }
}
// PROGRAM
int main() {
    int pilihan;
    cout << "\n=== Sendi Winoto (241011401234) ===\n";
    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1. Tambah Buku (PUSH)\n";
        cout << "2. Ambil Buku (POP)\n";
        cout << "3. Lihat Buku Teratas (PEEK)\n";
        cout << "4. Tampilkan Semua Buku\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu [1-5]: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: PUSH(); break;
            case 2: POP(); break;
            case 3: PEEK(); break;
            case 4: DISPLAY(); break;
            case 5: cout << "\nTerima kasih!\n"; break;
            default: cout << "\nPilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}
