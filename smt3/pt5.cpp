#include <iostream>
using namespace std;
#define MAX 6

class DStack {
private:
    int top1;
    int top2;
    int ele[MAX];
public:
    DStack();
    void pushA(int item);
    void pushB(int item);
    int  popA(int *item);
    int  popB(int *item);
    void DisplayA();
    void DisplayB();
};

DStack::DStack() {
    top1 = -1;
    top2 = MAX;
}

void DStack::pushA(int item) {
    if (top2 == top1 + 1) {
        cout << "\nStack Overflow Stack1";
        return;
    }
    ele[++top1] = item;
    cout << "\nItem disisipkan di Stack1: " << item;
}

void DStack::pushB(int item) {
    if (top2 == top1 + 1) {
        cout << "\nStack Overflow Stack2";
        return;
    }
    ele[--top2] = item;
    cout << "\nItem disisipkan di Stack2: " << item;
}

int DStack::popA(int *item) {
    if (top1 == -1) {
        cout << "\nStack Underflow Stack1";
        return -1;
    }
    *item = ele[top1--];
    return 0;
}

int DStack::popB(int *item) {
    if (top2 == MAX) {
        cout << "\nStack Underflow Stack2";
        return -1;
    }
    *item = ele[top2++];
    return 0;
}

void DStack::DisplayA() {
    cout << "\nIsi Stack1: ";
    if (top1 == -1) { cout << "(kosong)"; return; }
    for (int i = top1; i >= 0; i--) cout << ele[i] << " ";
}

void DStack::DisplayB() {
    cout << "\nIsi Stack2: ";
    if (top2 == MAX) { cout << "(kosong)"; return; }
    for (int i = top2; i < MAX; i++) cout << ele[i] << " ";
}

int main() {
    int item = 0;
    DStack s;

    s.pushA(24);
    s.pushA(10);
    s.pushA(11);

    s.pushB(40);
    s.pushB(12);
    s.pushB(34); 

    if (s.popA(&item) == 0) cout << "\nMenghapus Item dari Stack1 : " << item;
    if (s.popA(&item) == 0) cout << "\nMenghapus Item dari Stack1 : " << item;
    if (s.popA(&item) == 0) cout << "\nMenghapus Item dari Stack1 : " << item;

    if (s.popB(&item) == 0) cout << "\nMenghapus Item dari Stack2 : " << item;
    if (s.popB(&item) == 0) cout << "\nMenghapus Item dari Stack2 : " << item;
    if (s.popB(&item) == 0) cout << "\nMenghapus Item dari Stack2 : " << item;

    s.DisplayA();
    s.DisplayB();
    cout << endl;
    return 0;
}
