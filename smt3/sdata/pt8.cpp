#include <iostream>
using namespace std;

#define MAX 5

// Deklarasi Double Ended Queue
class DQueue {
private:
    int front;
    int rear;
    int count;
    int ele[MAX];

public:
    DQueue();
    int isFull();
    int isEmpty();
    void insertDQueueAtRear(int item);
    void insertDQueueAtFront(int item);
    int deleteDQueueAtFront(int *item);
    int deleteDQueueAtRear(int *item);
};

// Inisialisasi Double Ended Queue
DQueue::DQueue() {
    front = 0;
    rear = -1;
    count = 0;
}

// Mengecek apakah queue penuh
int DQueue::isFull() {
    int full = 0;
    if (count == MAX)
        full = 1;
    return full;
}

// Mengecek apakah queue kosong
int DQueue::isEmpty() {
    int empty = 0;
    if (count == 0)
        empty = 1;
    return empty;
}

// Menyisipkan item di belakang (rear)
void DQueue::insertDQueueAtRear(int item) {
    if (isFull()) {
        cout << "\nQueue Overflow";
        return;
    }

    rear = (rear + 1) % MAX;
    ele[rear] = item;
    count++;

    cout << "\nDimasukkan di Belakang FRONT: " << front << ", REAR: " << rear;
    cout << "\nItem dimasukkan: " << item << endl;
}

// Menghapus item dari depan (front)
int DQueue::deleteDQueueAtFront(int *item) {
    if (isEmpty()) {
        cout << "\nQueue Underflow";
        return -1;
    }

    *item = ele[front];
    front = (front + 1) % MAX;
    count--;

    cout << "\nSetelah Hapus Di Depan FRONT: " << front << ", REAR: " << rear;
    return 0;
}

// Menyisipkan item di depan (front)
void DQueue::insertDQueueAtFront(int item) {
    if (isFull()) {
        cout << "\nQueue Overflow";
        return;
    }

    if (front == 0)
        front = MAX - 1;
    else
        front = front - 1;

    ele[front] = item;
    count++;

    cout << "\nSetelah Sisipkan Di Depan FRONT: " << front << ", REAR: " << rear;
    cout << "\nItem yang disisipkan: " << item << endl;
}

// Menghapus item dari belakang (rear)
int DQueue::deleteDQueueAtRear(int *item) {
    if (isEmpty()) {
        cout << "\nQueue Underflow";
        return -1;
    }

    *item = ele[rear];
    if (rear == 0)
        rear = MAX - 1;
    else
        rear = rear - 1;

    count--;
    cout << "\nSetelah Hapus Di Belakang FRONT: " << front << ", REAR: " << rear;
    return 0;
}

// Program utama
int main() {
    int item;
    DQueue q = DQueue();

    q.insertDQueueAtRear(24);
    q.insertDQueueAtRear(10);
    q.insertDQueueAtRear(11);
    q.insertDQueueAtFront(40);
    q.insertDQueueAtFront(12);
    q.insertDQueueAtRear(34);

    if (q.deleteDQueueAtFront(&item) == 0)
        cout << "\nItem dihapus: " << item << endl;

    if (q.deleteDQueueAtRear(&item) == 0)
        cout << "\nItem dihapus: " << item << endl;

    if (q.deleteDQueueAtRear(&item) == 0)
        cout << "\nItem dihapus: " << item << endl;

    if (q.deleteDQueueAtRear(&item) == 0)
        cout << "\nItem dihapus: " << item << endl;

    cout << "\n";
    return 0;
}
