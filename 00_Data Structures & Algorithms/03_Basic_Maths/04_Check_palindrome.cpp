#include<bits/stdc++.h>
using namespace std;

void check_palindrome(int n){
    
    int dup = n;
    
    int rev = 0;
    
    while(n>0){
        rev = (rev*10) + (n%10);
        n = n / 10;
    }
    
    if(rev == dup) cout << "true";
    else cout << "false";
}

int main(){
    
int n;
cin >> n;

check_palindrome(n);
    
}