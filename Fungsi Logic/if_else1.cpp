#include<iostream>

using namespace std;
main(void)
{
	int NilaiUjian;
	
	cout << "masukan nilai: ";
	cin >> NilaiUjian;
	
	if(NilaiUjian >= 60)
	cout << "Lulus"<<endl; // nilai 60 s/d 100 Lulus
		else
		cout << "Tidak Lulus" << endl; // nilai 0 s/d 59 Tidak Lulus
}
