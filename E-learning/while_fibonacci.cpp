#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan Fibonacci: ";
    cin >> n;

    int a = 0, b = 1, next = 0;
    int i = 1;

    cout << "Bilangan Fibonacci: ";

    while (i <= n) {
        if (i == 1) {
            cout << a << " ";
        } else if (i == 2) {
            cout << b << " ";
        } else {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
        i++;
    }

    cout << endl;
}
