#include<iostream>
using namespace std;
// fungsi (&) mendapatkan alamat variabel
// fungsi (* ) membuka variabel dan melihat isi didalamnya
int main(void){
    int A=25,*pA;
    pA=&A;
    cout<<"A="<<A<<endl;
    cout<<"pA="<<pA<<endl;
    cout<<"&A="<<&A<<endl;
    cout<<"&pA="<<&pA<<endl;
    cout<<"*pA="<<*pA<<endl;
    cout<<endl;
    *pA=100;
    cout<<"*pA="<<*pA<<endl;

}
