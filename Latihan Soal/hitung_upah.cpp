#include<iostream>

using namespace std;

int main(){
	string nama;
	int golongan, jamKerja, upah;
	
	cout << "Masukan Nama Karyawan: ";
	cin >> nama;

	cout << "Masukan Golongan (1-4): ";
	cin >> golongan;

	cout << "Masukan Jam Kerja(per Jam): ";
	cin >> jamKerja;
	
	switch (golongan){
		case 1:
			upah = 5000;
			break;
		case 2:
			upah = 7000;
			break;
		case 3:
			upah = 10000;
			break;
		case 4:
			upah = 12000;
			break;
		default:
			cout << "Invalid harap Masukan Golongan(1-4)"<<endl;
	}

	cout<<"Upah anda adalah Rp. " << jamKerja*upah << endl;

    return 0;
}
