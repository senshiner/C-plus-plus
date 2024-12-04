#include<iostream>
using namespace std;
int main(void){
    char A[3][5]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};

    char *P;
    P=&A[0][0];

    cout<<*P<<endl;


}