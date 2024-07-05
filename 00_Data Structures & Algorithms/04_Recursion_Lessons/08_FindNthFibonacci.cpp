// Find Nth Fibonacci
// 0 1 1 2 3 5 8 13 21 34...
// f(n) = f(n-1) + f(n-2)

// Time Complexity = O (2^n)
// Coz every f calls 2 other f, hence exponential

#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n <= 1) return n;
    
    int last = f(n-1);
    int slast = f(n-2);
    
    return last + slast;
}

int main(){
    
    int n;
    cin >> n;
    
    cout << f(n);
    
}
/*

Input : 8
Output : 21

*/