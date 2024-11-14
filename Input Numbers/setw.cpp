#include<iostream>
#include<iomanip>
//iomanip buat kolom dan karakter pengisi
using namespace std;
main(void) {
	int x;
	x = 64;
	cout << 123456789 << endl; // Output: 123456789
	cout << setw(9) << 123 << endl; /* Output:(      123)
    Mengatur lebar kolom jadi 9 karakter(6 spasi dan 123, total 9) */
	cout << 123 << endl; // Output: 123
	cout << hex << x << endl; /* Output:(40)
    Mengatur agar x ditampilkan dalam format heksadesimal (basis 16)*/
	cout << oct << x << endl; /* Output:(100)
    Mengatur agar x ditampilkan dalam format oktal (basis 8)*/
	cout << dec << x << endl; /* Output:(64)
    Mengatur agar x ditampilkan dalam format desimal (basis 10)*/
	cout << setfill('.'); // Mengisi menjadi titik (.) untuk setiap spasi yg kosong
	cout << setw(10) << x << endl; /* Output:(........64)
    Mengatur lebar kolom jadi 10 karakter(8 titik dan 64, total 10) */
	cout << x << endl; // Output: 64
}
