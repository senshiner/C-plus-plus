#include<iostream>
using namespace std;

int main() {
    // Format Array:
    // namaObjek[jumlahElemen] = {properti1, properti2, ..., propertiN};

    // Array yang menyimpan nama-nama hari dalam seminggu
    string hari[7] = {"minggu", "senin", "selasa", "rabu", "kamis", "jumat", "sabtu"};

    int nomorHari;
    cout << "Masukkan Nomor Hari: ";
    cin >> nomorHari;

    // Mengakses elemen array dengan mengurangi 1 dari nomorHari karena indeks array mulai dari 0
    cout << hari[nomorHari - 1] << endl;

    return 0; 
}
