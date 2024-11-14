#include<iostream>
using namespace std;

int main(){
	int i=1;
	while(i<=5)
	{
		cout << i << endl;
		i++;
	} // Output: 1,2,3,4,5
	cout << endl;
	
	int k=1;
	while(k<5)
	{
	cout << k << endl;
		k++;
	} // Output: 1,2,3,4
	cout << endl;
	
	int o=1;
	while(o<5)
	cout << o++ << endl; // Output: 1,2,3,4
	cout << endl;
	
	int p=1;
	while(p<=5)
	cout << ++p << endl; // Output: 2,3,4,5,6
	cout << endl;
	
}
