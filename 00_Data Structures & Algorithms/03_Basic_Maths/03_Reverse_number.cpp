#include<bits/stdc++.h>
using namespace std;

void reverse_number(int n){
    int rev = 0;
    
    while(n > 0){
        rev = (rev*10) + (n%10);
        n = n/10;
    }
    
    cout << rev;
}

int main(){
    
    int n;
    cin >> n;
    
    reverse_number(n);
    
}