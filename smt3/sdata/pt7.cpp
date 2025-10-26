#include <iostream>
using namespace std;

const int MAX = 5;

class CircularQueue {
    int arr[MAX];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return front == -1; }

    bool isFull() {
        return (front == 0 && rear == MAX - 1) || (rear + 1 == front);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue sudah penuh, data " << value << " tidak bisa ditambahkan.\n";
            return;
        }

        if (isEmpty())
            front = rear = 0;
        else if (rear == MAX - 1 && front != 0)
            rear = 0;
        else
            rear++;

        arr[rear] = value;
        cout << "Data " << value << " berhasil dimasukkan ke queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong, tidak ada data untuk dihapus.\n";
            return;
        }

        cout << "Data " << arr[front] << " dihapus dari queue.\n";

        if (front == rear)
            front = rear = -1;
        else if (front == MAX - 1)
            front = 0;
        else
            front++;
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Queue kosong.\n";
            return;
        }

        cout << "Isi queue saat ini: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < MAX; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "Ziyad Maulana Rizki(241011401917)\n" << endl;
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(17);
    cq.dequeue();
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);
    cq.dequeue();

    cq.tampilkan();
}
