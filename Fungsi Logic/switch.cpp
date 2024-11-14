#include<iostream>
using namespace std;

int main(){
	int nomorHari;
	cout << "Masukan Nomor Hari: ";
	cin >> nomorHari;

	switch(nomorHari){
	
		case 1:
			cout << "minggu" << endl;
			break;
		case 2:
			cout << "senin" << endl;
			break;
		case 3:
			cout << "selasa" << endl;
			break;
		case 4:
			cout << "rabu" << endl;
			break;
		case 5:
			cout << "kamis" << endl;
			break;
		case 6:
			cout << "jumat" << endl;
			break;
		case 7:
			cout << "sabtu" << endl;
			break;
		default:
			cout << "Salah Nomor" << endl;
			break;
	}
			
}
