#include <bits/stdc++.h>
using namespace std;

int sum1toN(int n){
    if(n == 0){
        return 0;
    }
    else {
        cout << n << endl;
        return (n+sum1toN(n-1));
    }
}

int main(){
    int n;
    cin >> n;
    int s = sum1toN(n);
    cout << s;
}

/*

Input : 5
Output : 15 (1+2+3+4+5)
*/