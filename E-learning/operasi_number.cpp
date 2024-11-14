#include <iostream>
#include <cmath>

using namespace std;
main(void)
{
	int f,g,h,p,q,r,m,n,i,j,a,b,x,y;
	x = 5;
	y = 8 - x++;
	cout << x << endl; // Output x menjadi 6 karena x++
	cout << y << endl; // Output y jadi 3 hasil 8 - 5 (x = 5)
	
	a = 5;
	b = 8 - ++a; 
	cout << a << endl; // Output a menjadi 6 karena ++a
	cout << b << endl; // Output b jadi 2 hasil 8 - 6 (b = 5 + 1) 
	
	i = 5;
	j = 8 - i--;
	cout << i << endl; // Output i menjadi 4 karena i--
	cout << j << endl; // Output j jadi 3 hasil 8 - 5 (i = 5) 
	
	m = 5;
	n = 8 - --m;
	cout << m << endl; // Output m menjadi 4 karena --m
	cout << n << endl; // Output n jadi 4 hasil 8 - 4 (m = 5 - 1)

	p = 10;
	q = 3;
    r = p % q;
	cout << r << endl; // Output r menjadi 1 karena 10 : 3 adalah 3{dari 9} sisa 1

    // pow perlu #include <cmath>
	f = pow(3,2); // Output 3 pangkat 2 = 9
	g = 3; // Output 3
    h = f - g; // Output 9 - 3
    cout << h << endl; // Output hasil 9 - 3 = 6
	
	return 0;
}
