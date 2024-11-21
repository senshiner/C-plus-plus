#include<iostream>
using namespace std;
int main(void){
    // int i=0, a[5];
    // while(i<5){
    //     cout<<"a["<<i<<"]=";
    //     cin>>a[i];
    //     i++;
    // }
    // cout<<endl<<"Isi array a adalah :"<<endl;
    // for(i=0;i<5;i++)
    // cout<<"a["<<i<<"]="<<a[i]<<endl;
    // cout<<endl;

    int i,j,a[2][3];
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];

        }
    }
    cout<<endl<<"Isi array a adalah :"<<endl;
    for(i=0;i<=1;i++)
        for(j=0;j<=2;j++)
    cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<endl;
    
}