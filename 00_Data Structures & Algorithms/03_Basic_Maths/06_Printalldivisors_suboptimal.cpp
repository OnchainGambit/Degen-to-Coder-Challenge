// Print all divisors
// Time Complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

void print_divisors(int n){
    
    for(int i=1;i<=n;i++){
        
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

int main(){
    
int n;
cin >> n;

print_divisors(n);
    
}