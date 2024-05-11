/*

Pattern 10

Input: ‘N’ = 3

Output: 

*
**
***
**
*

*/

#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout << endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

int n;
cin >> n;
nStarTriangle(n);

}