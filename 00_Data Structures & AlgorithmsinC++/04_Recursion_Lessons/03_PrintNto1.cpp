#include <bits/stdc++.h>
using namespace std;

int Nto1(int i, int n){
    
    if(i<1) return 0;
    
    cout << i << " ";
    Nto1(--i,n);
}

int main(){
    int n;
    cin >> n;
    Nto1(n,n);
}

/*

Input : 5
Output : 5 4 3 2 1
*/