#include<iostream>
using namespace std;

int main(){
	int pilihan,harga = 0;
	
	cout<<"\nMenu Paket Bakaran\n";
	cout<<"1. Paket ayam - Rp 20.000\n";
	cout<<"2. Paket bebek - Rp 30.000\n";
	cout<<"3. Paket ikan - Rp 35.000\n";
	cout<<"4. Paket cumi - Rp 40.000\n";
	cout<<"Masukan pilihan (1-4): ";
	cin>>pilihan;
	
	if(pilihan == 1){
		cout<<"Ayam + Nasi + Es teh\n";
		harga = 20000;
	} else if(pilihan == 2){
		cout<<"bebek + Nasi + Es teh\n";
		harga = 30000;
	} else if(pilihan == 3){
		cout<<"ikan + Nasi + Es teh\n";
		harga = 35000;
	} else if(pilihan == 4){
		cout<<"cumi + Nasi + Es teh\n";
		harga = 40000;
	} else{
		cout<<"Pilihan tidak tersedia.";
		return 1;
	}
	cout<<"Total Harga: "<<harga<<endl;

	return 0;
}
