#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//soal 1
	unsigned long long nim;
	double diskon;

	cout<<"masukan nim: ";
	cin>>nim;
	int digitnim = nim % 100;
	
	if(!digitnim){
		cout<< "error: harap masukan nim" << endl;
    } else if(digitnim >=80){
            diskon = 40.0;
        } else if(digitnim >=50){
            diskon = 20.0;
        } else {
            diskon = 0;
        }
	
	cout << "2 digit akhir : " << digitnim << "\ndiskon : " << diskon << "%" << endl;
	cout << endl;
	
	//soal 2
	int m,k,j;
	m = 21;
	k = 24;

	//soal 2 A
	k++;
	j = m + k;
	cout << j << endl;

	//soal 2 B
	k--;
	j = m - k;
	cout << j << endl;

	//soal 2 C
	j = k % m;
	cout << j << endl;
	cout << endl;
	
	//soal 3
	double a,b,c,x;

	cout<<"A : ";
	cin>>a;

	cout<<"B : ";
	cin>>b;

	cout<<"C : ";
	cin>>c;

	x = a+pow(b,2)/c;
	cout << "Hasil nilai x dari " << a << " + " << b << "^2 " <<" : "<< c << " = " << x << endl;
	cout << endl;
	
	return 0;
}
