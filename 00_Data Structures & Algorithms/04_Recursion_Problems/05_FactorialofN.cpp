#include <bits/stdc++.h>
using namespace std;

int FactN(int n){
    if(n == 1){
        return 1;
    }
    else {
        return (n*FactN(n-1));
    }
}

int main(){
    int n;
    cin >> n;
    int s = FactN(n);
    cout << s;
}

/*

Input : 5
Output : 120 (5*4*3*2*1)
*/