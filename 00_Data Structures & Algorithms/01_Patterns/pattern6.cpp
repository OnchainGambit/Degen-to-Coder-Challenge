
/*
Pattern 6

Input: ‘N’ = 3

Output: 

1 2 3
1 2
1

*/


#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
   for(int i=1;i<=n;i++){
       for(int j=1; j<=n-i+1;j++){
           cout << j << " ";
       }
       cout << endl;
   }
}

int main() {

int n;
cin >> n;
nNumberTriangle(n);

}