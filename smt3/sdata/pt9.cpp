#include <iostream>
using namespace std;

struct Node {
    int INFO;
    Node* LINK;
};

Node* FIRST = NULL;

void tambahNode(int nilai) {
    Node* baru = new Node;
    baru->INFO = nilai;
    baru->LINK = NULL;

    if (FIRST == NULL)
        FIRST = baru;
    else {
        Node* Q = FIRST;
        while (Q->LINK != NULL)
            Q = Q->LINK;
        Q->LINK = baru;
    }
}

int hitungSimpul(Node* F) {
    int c = 0;
    for (Node* Q = F; Q != NULL; Q = Q->LINK)
        c++;
    return c;
}

int totalINFO(Node* F) {
    int t = 0;
    for (Node* Q = F; Q != NULL; Q = Q->LINK)
        t += Q->INFO;
    return t;
}

void cetakINFO(Node* F) {
    for (Node* Q = F; Q != NULL; Q = Q->LINK)
        cout << Q->INFO << " ";
    cout << endl;
}

int hitungINFO50(Node* F) {
    int c = 0;
    for (Node* Q = F; Q != NULL; Q = Q->LINK)
        if (Q->INFO == 50)
            c++;
    return c;
}

int main() {
    tambahNode(25);
    tambahNode(12);
    tambahNode(50);
    tambahNode(27);
    tambahNode(14);

    cout << "Jumlah simpul: " << hitungSimpul(FIRST) << endl;
    cout << "Total INFO: " << totalINFO(FIRST) << endl;

    cout << "Nilai INFO: ";
    cetakINFO(FIRST);

    cout << "Jumlah simpul dengan INFO=50: " << hitungINFO50(FIRST) << endl;

    return 0;
}
