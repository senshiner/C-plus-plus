#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    // char nama[]="Mulyadi Oscar";
    // cout<<nama<<endl;
    // cout<<nama[0]<<endl;
    // cout<<nama[8]<<endl;

    // char nama[15];
    // strcpy(nama,"Jennifer Lopez");
    // cout<<nama<<endl;
    // cout<<nama[0]<<endl;
    // cout<<nama[7]<<endl;

    char kalimatA[35];
    char kalimatB[35];
    strcpy(kalimatA,"Kota Yogyakarta");
    strcpy(kalimatB,kalimatA);
    strupr(kalimatA);
    cout<<kalimatA<<endl;
    strlwr(kalimatA);
    cout<<kalimatA<<endl;
    cout<<strcmp(kalimatA,kalimatB)<<endl;
    strcat(kalimatB,"Never Ending Asia");
    cout<<kalimatB<<endl;
}