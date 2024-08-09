
/*

Check for Prime if yes print true or false
Prime definition --> it has exactly 2 divisors 1 and itself

*/

#include<bits/stdc++.h>
using namespace std;

// Optimal : O(sqrt(N))
void check_prime(int n){
    
    int count = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){ 
            count++;
            if((n/i) != i) count++;
        }
    }
    
    if (count == 2) cout << "true";
    else cout << "false";

}

int main(){
    
int n;
cin >> n;

check_prime(n);
    
}