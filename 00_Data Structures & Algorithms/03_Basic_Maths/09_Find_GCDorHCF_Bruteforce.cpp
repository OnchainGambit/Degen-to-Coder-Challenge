
/*

Find GCD or HCF(Highest Common Divisor) of numbers a & b.

Example :-
9   &   12

9  = 9, 3, 1
12 = 12, 6, 4, 3, 2, 1

HCF = 3

Brute force Solution : Simply loop from lower of a & b to 1 and if divisor found then return

*/

#include<bits/stdc++.h>
using namespace std;

// O(min(a,b))
int HCF(int a, int b){
    
    int m = min(a,b);
    for(int i=m;i>=1;i--){
        if((a%i == 0) && (b%i == 0)){
            return i;
        }
    }
}

int main(){
    
int a, b;
cin >> a >> b;

int GCD = HCF(a,b);
cout << GCD;
    
}