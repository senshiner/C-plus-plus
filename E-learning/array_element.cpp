#include <iostream>
#include <string>
// untuk string
using namespace std;

int main() {
   // Element Array
    int data[10] = {80, 76, 87, 10, 67, 90, 77, 54, 9, 32};
    cout << "Data dalam array: "<<endl;

    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": " << data[i] << endl;
    }
    cout<<endl;
    
    // Array for
    const int SIZE = 5;
    string ekskul[SIZE] = {"Futsal", "Basket", "Badminton", "Karate", "Pramuka"};
    cout << "List Ekskul:" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ". " << ekskul[i] << endl;
    }
    cout<<endl;

    //Latihan array
	string array[5] = {"baju","celana","jaket","ayam","sarung"};

	for(int j = 0; j < 5; j++){
		array[3] = "helm";
		cout<< array[j] <<endl;
	}
	cout<<endl;

    return 0;
}