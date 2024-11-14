#include <iostream>
using namespace std;

int main() {
    double L, V, Jari2, Tinggi;
    Jari2 = 10;
    Tinggi = 20; 
    const double pi = 3.14;

    // Menghitung luas permukaan tabung
    L = 2 * pi * Jari2 * (Jari2 + Tinggi);

    // Menghitung volume tabung
    V = pi * Jari2 * Jari2 * Tinggi;

    // Menampilkan hasil
    cout << "Luas permukaan tabung: " << L << endl;
    cout << "Volume tabung: " << V << endl;

    return 0;
}