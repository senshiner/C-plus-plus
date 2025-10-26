#include <iostream>
#include <string>
using namespace std;

string ambilKode(string kode) {
    string depan = kode.substr(2, 1);
    string belakang = kode.substr(kode.length()-2, 1);
    return depan + belakang;
}

int main() {
    string kodePasien[] = {"12K0155", "11P2621", "12P2146", "10K8062"};
    string penyakit[]   = {"Kanker", "Paru-paru", "Paru-paru", "Paru-paru"};
    string spesialis[]  = {"Onkologi", "Pulmonolog", "Pulmonolog", "Onkologi"};
    int kunjungan[]     = {6, 5, 4, 6};
    double honor[]      = {750000, 450000, 450000, 750000};
    double biayaKamar[] = {1250000, 1250000, 1000000, 800000};

    string input;
    cout << "UNIVERSITAS PAMULANG\n";
    cout << "QUIZ1 10 OKTOBER 2025\n";
    cout << "241011401234 - SENDI WINOTO\n\n";
    cout << "Masukkan kode pasien: ";
    cin >> input;

    bool ditemukan = false;

    for (int i = 0; i < 4; i++) {
        if (ambilKode(input) == ambilKode(kodePasien[i])) {
            double total = (honor[i] * kunjungan[i]) + biayaKamar[i];
            double ppn = total * 0.11;
            double grandTotal = total + ppn;

            cout << "\n=== DATA PASIEN ===" << endl;
            cout << "Kode Pasien       : " << kodePasien[i] << endl;
            cout << "Penyakit          : " << penyakit[i] << endl;
            cout << "Dokter Spesialis  : " << spesialis[i] << endl;
            cout << "Jumlah Kunjungan  : " << kunjungan[i] << endl;
            cout << "Honor Dokter/Kali : " << honor[i] << endl;
            cout << "Total Biaya Kamar : " << biayaKamar[i] << endl;
            cout << "-----------------------------" << endl;
            cout << "Subtotal           : " << total << endl;
            cout << "PPN (11%)          : " << ppn << endl;
            cout << "Total Bayar        : " << grandTotal << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nPasien tidak ditemukan" << endl;
    }

    return 0;
}
