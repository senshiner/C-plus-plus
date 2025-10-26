#include <iostream>
#include <string>
using namespace std;

#define MAX 5 // kapasitas buffer

class LinearQueue {
private:
    string data[MAX];
    int front, rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void insert(string nilai) {
        if (isFull()) {
            cout << ">>> Buffer PENUH! Data \"" << nilai << "\" tidak bisa masuk.\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        data[rear] = nilai;
        cout << "Sensor \"" << nilai << "\" masuk ke buffer.\n";
    }

    void remove() {
        if (isEmpty()) {
            cout << ">>> Buffer KOSONG! Tidak ada data untuk dikirim.\n";
            return;
        }
        cout << "Data \"" << data[front] << "\" terkirim ke server.\n";
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void reset() {
        front = rear = -1;
        cout << "Buffer dikosongkan.\n";
    }

    void display() {
        cout << "\nIsi Buffer saat ini: ";
        if (isEmpty()) {
            cout << "[KOSONG]\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            if (i == front && i == rear)
                cout << "[F&R:" << data[i] << "] ";
            else if (i == front)
                cout << "[F:" << data[i] << "] ";
            else if (i == rear)
                cout << "[R:" << data[i] << "] ";
            else
                cout << "[" << data[i] << "] ";
        }
        cout << "\n";
    }
};

int main() {
    cout << "========================================\n";
    cout << "   Buffer Cetakan Sensor IoT (Queue)   \n";
    cout << "   Sendi Winoto (241011401234)  \n";
    cout << "========================================\n";

    LinearQueue buffer;
    int pilihan;
    string nilai;

    do {
        cout << "\nMenu:\n";
        cout << "1. INSERT data sensor\n";
        cout << "2. DELETE data (kirim ke server)\n";
        cout << "3. RESET buffer\n";
        cout << "4. DISPLAY isi buffer\n";
        cout << "5. EXIT\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data sensor (contoh: 27C): ";
                cin >> nilai;
                buffer.insert(nilai);
                break;
            case 2:
                buffer.remove();
                break;
            case 3:
                buffer.reset();
                break;
            case 4:
                buffer.display();
                break;
            case 5:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}
