#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SIZE = 5;
    string ekskul[SIZE] = {"Futsal", "Basket", "Badminton", "Karate", "Pramuka"};

    cout << "List Ekskul:" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ". " << ekskul[i] << endl;
    }

    return 0;
}

