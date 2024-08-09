// Count Number of digits
// Time Complexity = log10(N) 
// Number of iterations depend on times N can be devided by 10 so log10(N)

#include<bits/stdc++.h>
using namespace std;

void count_digits(int n){
    int count = 0;
    
    while(n > 0){
        n = n/10;
        count++;
    }
    cout << count << endl;
}

int main(){
    
    int n;
    cin >> n;
    
    count_digits(n);
    
    // or you can just log base 10
    
    int cnt = (int)(log10(n)) + 1;
    cout << cnt;
    
}