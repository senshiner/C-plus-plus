#include <iostream>

using namespace std;

int main() {
    int data[10] = {80, 76, 87, 10, 67, 90, 77, 54, 9, 32};

    cout << "Data dalam array: "<<endl;

    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": " << data[i] << endl;
    }
}

