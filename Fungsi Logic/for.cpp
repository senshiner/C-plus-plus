#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=5 ; i++)
	cout << i << endl; // Output: 1,2,3,4,5
	cout << endl;
	
	for(int a=1; a<=10; a+=2)
	cout << a << endl; // Output: 1,3,5,7,9
	cout << endl;
	
	for(int b=2; b<=10; b+=2)
	cout << b << endl; // Output: 2,4,6,8,10
	cout << endl;
	
	int k=0;
	for(;k<=10;){
		k++;
	cout << k << endl;
	} // Output: 1,2,3,4,5,6,7,8,9,10,11
	cout << endl;
	
	for(int h=1; h<=5;){
	cout << h+1 << endl;
		h++;
	} // Output: 2,3,4,5,6
	cout << endl;
	
	for(int e=1; e<=5;e++)
		for(int j=1; j<=e; j++)
		cout << "*";
		cout << endl; // Output:***************(15*)
	cout << endl;
		
	for(int l=1; l<5; l+=10)
		cout << l << endl; // Output: 1
	cout << endl;
	
	for(int m=1; m<5; m+=4)
		cout << m << endl; // Output: 1
	cout << endl;
	
}
