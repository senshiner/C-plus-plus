#include <iostream>
using namespace std;

int main() {
    double harga,diskon,total = 0;
    char ulangi;
    
    do{
    cout << "Masukan jumlah harga : ";
    cin >> harga;
    
    if(harga >= 1000000){
        diskon = 0.12;
        cout << "Diskon: " << harga * diskon;
    } else{
        diskon = 0;
    }
    
    total = harga - (harga * diskon);
    cout << "\nTotal Harga: " << total << endl;
    
    cout << "Ulangi? (y/n): ";
    cin >> ulangi;
    } while (ulangi == 'y'|| ulangi == 'Y');

    return 0;
}