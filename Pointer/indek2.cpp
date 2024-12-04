#include<iostream>
using namespace std;
int main(void){
    int *pTgl,*pTgl2,tglLahir[]={24,6,65};
    pTgl=tglLahir;pTgl2=&tglLahir[1];
    // menampilkan isi array dengan pointer
    for (int i = 1; i <= 3; i++)
    {
        cout<<*pTgl<<endl;
        pTgl++;
    }
    cout<<*pTgl2<<endl;
    cout<<*(pTgl2+1)<<endl;

}