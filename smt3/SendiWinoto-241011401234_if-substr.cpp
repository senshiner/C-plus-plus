#include <iostream>

#include <string>

#include <ctime>

#include <cstdlib>

using namespace std;



int main() {

    string nip;

    cout <<"========================================" <<endl;

    cout <<"   IDENTIFIKASI GAJI PEGAWAI"<<endl;

    cout <<"   SENDI WINOTO"<<endl;

    cout <<"   241011401234"<< endl;

    cout <<"========================================" <<endl<<endl;



    cout <<"Masukkan NIP : ";

    cin >> nip;



    string kode = nip.substr(0,1); 



    if (kode == "M" || kode == "m") {

        if (nip == "M1236A") {

            cout << "NIP       : " << nip << endl;

            cout << "Jabatan   : MANAGER" << endl;

            cout << "Gaji      : 25000000" << endl;

            cout << "Jumlah Pegawai : 36" << endl;

        } else if (nip == "M2341B") {

            cout << "NIP       : " << nip << endl;

            cout << "Jabatan   : MANAGER" << endl;

            cout << "Gaji      : 10000000" << endl;

            cout << "Jumlah Pegawai : 41" << endl;

        }

    }

    else if (kode == "P" || kode == "p") {

        if (nip == "P2211B") {

            cout << "NIP       : " << nip << endl;

            cout << "Jabatan   : PURCHASING" << endl;

            cout << "Gaji      : 10000000" << endl;

            cout << "Jumlah Pegawai : 11" << endl;

        }

    }

    else if (kode == "U" || kode == "u") {

        if (nip == "U1456A") {

            cout << "NIP       : " << nip << endl;

            cout << "Jabatan   : UMUM" << endl;

            cout << "Gaji      : 25000000" << endl;

            cout << "Jumlah Pegawai : 56" << endl;

        }

    }

    else {

        cout << "DATA PEGAWAI TIDAK TERDAFTAR!" << endl;

    }



    return 0;

}



