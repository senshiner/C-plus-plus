#include <iostream>
using namespace std;
int main ()
{
	// arraydengan 4 baris dan 3 kolom
	int x[4][3]= {{0,1,2},{3,4,5},{6,7,8},{9,10,11}};
	//keluarkan nilai setiap element array
	for ( int i=0;i<4;i++)
	{
	for( int j=0;j<3;j++)
	{
	cout<<"Element di x["<<i<<"]["<<j<<"]";
	cout<<x[i][i]<<endl;
	}
	}
	return 0;
}