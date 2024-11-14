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
    cout<<endl;

    //latihan array
	string array[5] = {"baju","celana","jaket","ayam","sarung"};

	for(int j = 0; j < 5; j++){
		array[3] = "helm";
		cout<< array[j] <<endl;
	}
	cout<<endl;

    return 0;
}

