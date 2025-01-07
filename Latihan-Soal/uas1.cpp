#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    const int MAX_COUNT = 10;
    const int MAX_SUM = 100;

    while (count < MAX_COUNT && sum <= MAX_SUM) {
        int input;
        cout << "Masukkan bilangan: ";
        cin >> input;

        if (input < 0) {
            cout << "Bilangan tidak boleh negatif. Silakan ulangi." << endl;
        } else {
            sum += input;
            count++;
        }
    }

    cout << "\nJumlah bilangan yang dimasukkan: " << count;
    cout << "\nTotal nilai: " << sum << endl;

    return 0;
}