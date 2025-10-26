#include<iostream>
using namespace std;
main(void)
{
	double NilaiUjian;
	char skor;
	
	cout << "Masukan nilai: ";
	cin >> NilaiUjian;

	if (NilaiUjian < 0 || NilaiUjian > 100) {
        cout << "Nilai Tidak Valid" << endl;
        return 0;
    }
	
	if(NilaiUjian >= 90 && NilaiUjian <= 100)
	skor = 'A'; // skor 90 s/d 100 A
	
	else if(NilaiUjian >= 70)
	skor = 'B'; // skor 70 s/d 89 B
	
	else if(NilaiUjian >= 60)
	skor = 'C'; // skor 60 s/d 69 C
	
	else if(NilaiUjian >= 50)
	skor = 'D'; // skor 50 s/d 59 D
	
	else
	skor = 'E'; // skor 0 s/d 49 E
	cout << "Skor : " << skor << endl;
}
