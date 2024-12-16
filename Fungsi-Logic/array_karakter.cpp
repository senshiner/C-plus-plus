#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char name[] = "Mulyadi Oscar"; // Output: Mulyadi Oscar
    cout << name << endl; // Output: Mulyadi Oscar

    cout << name[0] << endl; // Output: M
    cout << name[8] << endl; // Output: O

    char nama[15];
    strcpy(nama, "Jennifer Lopez"); // strcpy: salin string dari "Jennifer Lopez" ke variabel nama
    cout << nama << endl; // Output: Jennifer Lopez
    cout << nama[0] << endl; // Output: J
    cout << nama[7] << endl; // Output: e

  /*=====
  Kode dibawah hanya bisa di Runing di editor support strupr dan strlwr
  =====*/
    // char kalimatA[35];
    // char kalimatB[35];
    // strcpy(kalimatA, "Kota Yogyakarta"); // Output: Kota Yogyakarta
    // strcpy(kalimatB, kalimatA); // strcpy: salin kalimatA ke kalimatB
    // strupr(kalimatA); // strupr: konversi ke huruf besar
    // cout << kalimatA << endl; // Output: KOTA YOGYAKARTA
    // strlwr(kalimatA); // strlwr: ubah ke huruf kecil
    // cout << kalimatA << endl; // Output: kota yogyakarta
    // cout << strcmp(kalimatA, kalimatB) << endl; // strcmp: membandingkan kalimatA dan kalimatB
    // strcat(kalimatB, " Never Ending Asia"); // strcat: menambahkan string ke akhir kalimatB
    // cout << kalimatB << endl;
}