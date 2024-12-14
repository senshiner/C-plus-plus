#include <iostream>
using namespace std;

// fungsi (&) mendapatkan alamat variabel
// fungsi (* ) membuka variabel dan melihat isi didalamnya

int main(void)
{
    char kalimat[] = {"Selamat Belajar Visual C++"};  // Inisialisasi array karakter
    char *pKarakter;                                // Pointer untuk karakter
    int JumlahHurufKecil = 0;                       // Variabel untuk menghitung huruf kecil
    int JumlahHurufBesar = 0;                       // Variabel untuk menghitung huruf besar

    pKarakter = kalimat;                            // Pointer menunjuk ke awal array

    while (*pKarakter)                              // Looping sampai pointer mencapai akhir string
    {
        char kar = *pKarakter;                      // Mengambil karakter yang ditunjuk oleh pointer
        
        // && berarti "dan", artinya kondisi akan menjadi true hanya jika kedua kondisi terpenuhi
        if (kar >= 'a' && kar <= 'z')               // Mengecek apakah karakter adalah huruf kecil
            JumlahHurufKecil++;
        if (kar >= 'A' && kar <= 'Z')               // Mengecek apakah karakter adalah huruf besar
            JumlahHurufBesar++;
        
        pKarakter++;                                // Melangkah ke karakter berikutnya
    }

    cout << "Jumlah Huruf Kecil = " << JumlahHurufKecil << endl;
    cout << "Jumlah Huruf Kapital = " << JumlahHurufBesar << endl;
}