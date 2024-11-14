#include<iostream>

using namespace std;

int main(void){
    double totalBelanja, diskon;
    string kategoriDiskon;
    
    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    if(totalBelanja >= 1000000) {
        kategoriDiskon = "Diskon 20%";
        diskon = 0.2;
    }
    else if(totalBelanja >= 500000) {
        kategoriDiskon = "Diskon 15%";
        diskon = 0.15;
    }
    else if(totalBelanja >= 200000) {
        kategoriDiskon = "Diskon 10%";
        diskon = 0.1;
    }
    else if(totalBelanja >= 100000) {
        kategoriDiskon = "Diskon 5%";
        diskon = 0.05;
    }
    else {
        kategoriDiskon = "Tidak ada diskon";
        diskon = 0.0;
    }

    double totalDiskon = totalBelanja * diskon;
    double hargaSetelahDiskon = totalBelanja - totalDiskon;
    
    cout << "Kategori Diskon: " << kategoriDiskon << endl;
    cout << "Total Diskon: Rp " << totalDiskon << endl;
    cout << "Harga setelah diskon: Rp " << hargaSetelahDiskon << endl;
    
    return 0;
}
