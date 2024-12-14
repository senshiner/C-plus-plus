#include <iostream>
using namespace std;

// fungsi (&) mendapatkan alamat variabel
// fungsi (*p) membuka variabel dan melihat isi didalamnya

int main(void) {
    int A = 25, *pA;             // Variabel A dengan nilai 25 dan pointer pA
    pA = &A;                      // Pointer pA menunjuk ke alamat A

    // output: 25
    cout << "A = " << A << endl;

    // output: alamat &A
    cout << "pA = " << pA << endl;

    // output: alamat &A
    cout << "&A = " << &A << endl;

    // output: alamat &pA
    cout << "&pA = " << &pA << endl;

    // output: 25
    cout << "*pA = " << *pA << endl;

    cout << endl;

    *pA = 100; // Mengubah nilai A melalui pointer pA

    // output: 100
    cout << "*pA = " << *pA << endl;

}