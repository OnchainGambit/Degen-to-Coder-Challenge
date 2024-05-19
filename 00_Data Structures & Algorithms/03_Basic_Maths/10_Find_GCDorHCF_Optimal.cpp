
/*

Find GCD or HCF(Highest Common Divisor) of numbers a & b.

Example :-
9   &   12

9  = 9, 3, 1
12 = 12, 6, 4, 3, 2, 1

HCF = 3

Optimal Solution | Ecludean Algorithm
it states

if a>b
GCD(a,b) = GCD(a%b,b)

Logic : keep doing a%b until one of them is 0. The other one is GCD
Time Complexity : O(logphi(min(a,b))

*/

#include<bits/stdc++.h>
using namespace std;

int HCF(int a, int b){
    
    while(a > 0 && b > 0){
        
        if(a>b) a = a%b;
        else b = b%a;
    }
    
    if(a==0) return b;
    else return a;
}

int main(){
    
int a, b;
cin >> a >> b;

int GCD = HCF(a,b);
cout << GCD;
    
}