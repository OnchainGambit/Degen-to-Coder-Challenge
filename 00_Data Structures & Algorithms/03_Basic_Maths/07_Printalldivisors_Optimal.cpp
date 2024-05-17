// Print all divisors, more optimal
// Time Complexity = O(root(N))

/*

Mathematical Observation

say n = 36

divisors :-
1 x 36
2 x 18
3 x 12
4 x 9
6 x 6 ----> same after this
9 x 4
12 x 3
18 x 2
36 x 1 

we can see after root2of(n) all are same divisors
and before i <= sqrt(n), we can find others via n/i, eg : 36/2 = 18

Output :- 1 36 2 18 3 12 4 9 6
we cannot repeat 6
also sort it by storing in vector if needed

*/

#include<bits/stdc++.h>
using namespace std;

void print_divisors(int n){
    
    vector<int> v;
    
    // O(sqrt(n))
    for(int i=1; i * i <= n;i++){
        
        if (n%i == 0){
        v.push_back(i);
        if(i != (n/i)){
            v.push_back(n/i);
        }
    }
    }
    
    // O(n log n)
    sort(v.begin(), v.end());
    
    // O(n)
    for(auto it : v){
        cout << it << " ";
    }

}

int main(){
    
int n;
cin >> n;

print_divisors(n);
    
}