// C++ STL

/*

devide into 4 parts
1. Algorithms
2. Containers 
3. Functions
4. Iterators

*/

#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    
    pair<int, int> p = {6,9};
    
    cout << p.first << " " << p.second <<endl; // 6 9
    
    pair<int, pair<int,int>> p2 = {1, {3,4}};
    
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // 1 3 4
    
    pair<int, int> a[] = { {1,2}, {2,5}, {5,1} };
    cout << a[2].first; // 5
}

int main(){
    explainpair();
}