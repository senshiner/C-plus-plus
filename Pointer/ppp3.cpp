#include<iostream>
using namespace std;

// fungsi (* ) membuka variabel dan melihat isi didalamnya
int main(void){
    int *P;
    int A[5]={2,1,7,0,5};

    P=A;

    cout<<*++P<<endl;

    cout<<*P<<endl;

}
