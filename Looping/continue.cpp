#include <iostream>
using namespace std;
main (void) {
    int i=0;
    while (i<5)
    {
        if (i==3)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    } // Output: 0,1,2,4
    cout << endl;
    
    int j;
    for (j=0;j<=5;j++){
    if (j==3)
        continue;
        cout << j << endl;
    } // Output: 0,1,2,4,5
    cout << endl;

    int k;
    for (k=0;k<=5;k++){
    if (k==3)
        break;
        cout << k << endl;
    } // Output: 0,1,2
}