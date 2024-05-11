/*

Pattern 11

Input: ‘N’ = 3

Output: 

1
0 1
1 0 1

*/

#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           if(i%2){
               cout << j%2 << " ";
           }
           else{
               if(j%2==0) cout<<1<<" ";
               else cout<<0<<" ";
           }
       }
       cout<<endl;
   }
}

int main() {

int n;
cin >> n;
nBinaryTriangle(n);

}