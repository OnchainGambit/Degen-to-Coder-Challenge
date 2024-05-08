/*

(1) for Oute loop count number of rows
(2) for inner loop focus on columns, and conect them somehow to the rows
(3) PRINT content inside the inner loop
(4) [OPTIONAL] observe symmetry

*/

/*

Pattern 1

****
****
****
****

For n = 4

*/

#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=1; i <= n; i++){
        for(int j=1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern1(n);
}



