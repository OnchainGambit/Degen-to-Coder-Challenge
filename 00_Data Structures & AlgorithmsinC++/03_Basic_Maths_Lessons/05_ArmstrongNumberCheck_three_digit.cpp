// Check 3 digit Armstrong number
// 3 digit Armstrong Number is a number where sum of cube of it's digits is equal to the digits
// Example : 371

#include<bits/stdc++.h>
using namespace std;

void check_Armstrong(int n){
    
    int sum = 0;
    int dup = n;
    while(n>0){
        int digit = n%10;
        sum += digit * digit * digit;
        n = n/10;
    }
    
    if(sum == dup){
        cout << "true";
    }
    else {
        cout << "false";
    }
}

int main(){
    
int n;
cin >> n;

check_Armstrong(n);
    
}