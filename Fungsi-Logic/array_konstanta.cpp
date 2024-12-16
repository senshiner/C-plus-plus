#include<iostream>
using namespace std;
// Array dengan Lopping (For)
int main(void) {
    int j, b[4];
    for (j = 0; j <= 3; j++)
        b[j] = 2 + j;
    for (j = 0; j <= 3; j++)
        cout << b[j] << endl;
    cout << endl; // Output: 2,3,4,5

    int c, d[4] = {2, 4, 7, 6};
    for (c = 0; c <= 3; c++)
        cout << d[c] << endl;
    cout << endl; // Output: 2,4,7,6

    int k, e[3];
    e[0] = e[1] = 10;
    e[2] = 20;
    for (k = 0; k <= 2; k++)
        cout << e[k] << endl;
    cout << endl; // Output: 10,10,20

    return 0;
}