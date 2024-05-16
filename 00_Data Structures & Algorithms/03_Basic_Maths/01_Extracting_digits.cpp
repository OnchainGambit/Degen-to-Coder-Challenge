// Extracting digits in reverse fashion

// 7789 , n%10 = 9, n/10
// 778  , n%10 = 8, n/10
// 77   , n%10 = 7, n/10
// 7    , n%10 = 7, n/10
// 0

#include<bits/stdc++.h>
using namespace std;

void extract_digits(int n){
    
    while(n > 0){
        
        int last_digit = n % 10;
        cout << last_digit << endl;
        n = n/10;
    }
    
}

int main(){
    
    int n;
    cin >> n;
    
    extract_digits(n);
    
}