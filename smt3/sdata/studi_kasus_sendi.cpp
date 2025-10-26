#include <iostream>
#include <string>
using namespace std;

#define MAX 4  // kapasitas total

class Browser {
private:
    string arr[MAX];
    int topBack;    // stack Back
    int topForward; // stack Forward
    string current; // halaman yang sedang dibuka

public:
    Browser() {
        topBack = -1;
        topForward = MAX;
        current = "Home"; // halaman awal
    }

    // Tambah halaman baru
    void visit(const string &url) {
        if (topBack + 1 == topForward) {
            cout << "Memori penuh, tidak bisa membuka halaman baru!" << endl;
            return;
        }
        arr[++topBack] = current; 
        current = url;            
        topForward = MAX;       
        cout << "Membuka halaman: " << current << endl;
    }

    // Kembali ke halaman sebelumnya
    void back() {
        if (topBack == -1) {
            cout << "Tidak ada halaman untuk kembali." << endl;
            return;
        }
        if (topBack + 1 == topForward) {
            if (topBack + 1 == topForward) {
                arr[--topForward] = current; 
            }
        }
        arr[--topForward] = current;
        current = arr[topBack--];    
        cout << "Kembali ke: " << current << endl;
    }

    void forward() {
        if (topForward == MAX) {
            cout << "Tidak ada halaman untuk maju." << endl;
            return;
        }
        arr[++topBack] = current;   
        current = arr[topForward++];
        cout << "Maju ke: " << current << endl;
    }

    // Menampilkan status browser
    void show() {
        cout << "\n=== STATUS BROWSER ===" << endl;
        cout << "Halaman sekarang: " << current << endl;

        cout << "Back stack: ";
        for (int i = 0; i <= topBack; i++) cout << arr[i] << " ";
        if (topBack == -1) cout << "[kosong]";
        cout << endl;

        cout << "Forward stack: ";
        for (int i = topForward; i < MAX; i++) cout << arr[i] << " ";
        if (topForward == MAX) cout << "[kosong]";
        cout << endl;
    }
};

int main() {
    Browser b;
    int pilih;
    string url;
    cout << "=== Sendi Winoto(241011401234)===" << endl;
    do {
        cout << "\n=== MENU BROWSER ===" << endl;
        cout << "1. Kunjungi halaman baru" << endl;
        cout << "2. Back" << endl;
        cout << "3. Forward" << endl;
        cout << "4. Tampilkan status" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
        case 1:
            cout << "Masukkan URL: ";
            cin.ignore();
            getline(cin, url);
            b.visit(url);
            break;
        case 2:
            b.back();
            break;
        case 3:
            b.forward();
            break;
        case 4:
            b.show();
            break;
        case 0:
            cout << "Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilih != 0);

    return 0;
}
