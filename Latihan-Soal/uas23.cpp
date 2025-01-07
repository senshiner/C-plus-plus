#include <iostream>
using namespace std;

int main() {
    for(int i=10; i>0;i--)
    cout << i << endl;
    
    int suku =0;
    int suku1 =9;
    for (int k=1; k<=10;k++){
        cout << suku1 <<" ";
        suku += suku1;
        
        if(k%2==1){
            suku1 +=3;
        }else{
            suku1 -=1;
        }
    }
    cout << "\nTotal Jumlah Deret : " <<suku<< endl;
    return 0;
}