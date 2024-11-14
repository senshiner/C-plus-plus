#include<iostream>
using namespace std;
main(void)
{
	int x,s;
	cout << "Masukan Bilangan Bulat: ";
	cin >> x;
	s = x % 2;

	if(s == 0)
	cout << "Bilangan Genap" << endl;
    else
    cout << "Bilangan Ganjil" << endl;
}
