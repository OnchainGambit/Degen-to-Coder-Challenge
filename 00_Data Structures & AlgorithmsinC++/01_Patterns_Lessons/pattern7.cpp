
/*

pattern 7

Input: ‘N’ = 3

Output: 

  *
 ***
*****

*/


#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    int spaces = n-1, stars = 1;

    for(int i=1; i<=n;i++){
        for(int j=1; j <= spaces; j++){
            cout<<" ";
        }
        for(int j=1; j<= stars;j++){
            cout<< "*";
        }
        cout << endl;
        spaces--;
        stars +=2;
    }
}

int main() {

int n;
cin >> n;
nStarTriangle(n);

}