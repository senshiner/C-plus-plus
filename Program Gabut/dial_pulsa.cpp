#include <iostream>

using namespace std;

int pulsa = 0;
int paketKouta = 0;

void menuTersedia(){
	cout << "\n===MENU===\n";
	cout << "1. Isi Pulsa\n";
	cout << "2. Beli paket\n";
	cout << "3. Cek pulsa\n";
	cout << "4. Keluar\n";
	cout << endl;
}

void isiPulsa(){
	int pilihan;
	int hargaPulsa[] = {5000,10000,50000,100000};
	
	cout << "\nMenu Isi Pulsa\n";
	cout << "1. Pulsa 5.000\n";
	cout << "2. Pulsa 10.000\n";
	cout << "3. Pulsa 50.000\n";
	cout << "4. Pulsa 100.000\n";
	cout << "Pilih pulsa yang tersedia: ";
	cin >> pilihan;
	
	if(pilihan >=1 && pilihan <=4){
		pulsa += hargaPulsa[pilihan -1];
		cout << "Pulsa sebesar " << hargaPulsa[pilihan -1] << " Berhasil diisi" << endl;
	} else {
		cout << "Pilihan tidak tersedia" << endl;
	}
}

void beliPaket(){
	int pilihan;
	int hargaPaket[] = {20000,30000,50000};
	
	cout << "\nMenu Daftar Paket\n";
	cout << "1. 10 GB seharga 20000 pulsa\n";
	cout << "2. 20 GB seharga 30000 pulsa\n";
	cout << "3. 30 GB seharga 50000 pulsa\n";
	cout << "Pilih paket yang tersedia: ";
	cin >> pilihan;
	
	if(pilihan >=1 && pilihan <=3){
		if(pulsa >= hargaPaket[pilihan -1]){
			pulsa -= hargaPaket[pilihan -1];
			paketKouta += (pilihan == 1 ? 10 : (pilihan == 2 ? 20:30));
			cout << "Paket data sebesar " << (pilihan == 1 ? "10 GB " : (pilihan == 2 ? "20 GB ":"30 GB "))<<"berhasil diisi"<<endl;
		}else {
			cout << "Pulsa anda tidak mencukupi" << endl;
		}
	}else {
		cout << "Pilihan tidak tersedia" << endl;
	}
}

void cekPulsa(){
	cout << "\nCek Pulsa: \n";
	cout << "Pulsa anda sebesar " << pulsa << endl;
	cout << "Kouta anda sebesar " << paketKouta << "GB" << endl;
}

int main() {
    int pilihan;

    do {
        menuTersedia();
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        	case 1:
        		isiPulsa();
        		break;
        	case 2:
        		beliPaket();
        		break;
        	case 3:
        		cekPulsa();
        		break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }

        cout << endl;
    } while (pilihan != 4);

    return 0;
}
