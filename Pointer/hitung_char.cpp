#include<iostream>
using namespace std;
// fungsi (&) mendapatkan alamat variabel
// fungsi (* ) membuka variabel dan melihat isi didalamnya
int main(void)
{
    char kalimat[] = {"Selamat Belajar Visual C++"};
    char *pKarakter;
    int JumlahHurufKecil = 0;
    int JumlahHurufBesar = 0;

    pKarakter = kalimat;

    while (*pKarakter)
    {
        char kar = *pKarakter;// && dibaca "dan"
        if (kar >= 'a' && kar <= 'z')
            JumlahHurufKecil++;
        if (kar >= 'A' && kar <= 'Z')
            JumlahHurufBesar++;
        pKarakter++;
    }

    cout << "Jumlah Huruf Kecil = " << JumlahHurufKecil << endl;
    cout << "Jumlah Huruf Kapital = " << JumlahHurufBesar << endl;
} 
