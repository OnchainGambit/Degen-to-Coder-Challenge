
/*

pattern 8

Input: ‘N’ = 3

Output: 

*****
 ***
  *

*/


#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    int spaces = 0;
    int stars = 1 + 2* (n-1);

    for(int i=1; i<=n;i++){
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout << endl;
        
        spaces++;
        stars-=2;
    }
}

int main() {

int n;
cin >> n;
nStarTriangle(n);

}