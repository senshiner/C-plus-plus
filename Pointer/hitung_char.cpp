#include<iostream>
using namespace std;
int main(void)
{
    char kalimat[] = {"Selamat Belajar Visual C++"};
    char *pKarakter;
    int JumlahHurufKecil = 0;
    int JumlahHurufBesar = 0;

    pKarakter = kalimat;

    while (*pKarakter)
    {
        char kar = *pKarakter;
        if (kar >= 'a' && kar <= 'z')
            JumlahHurufKecil++;
        if (kar >= 'A' && kar <= 'Z')
            JumlahHurufBesar++;
        pKarakter++;
    }

    cout << "Jumlah Huruf Kecil = " << JumlahHurufKecil << endl;
    cout << "Jumlah Huruf Kapital = " << JumlahHurufBesar << endl;
} 