/*

map Time Complexity, both storing and fetching takes O(log n)

unordered_map Time Complexity for same
Best -> O(1)
Worst & Rare -> O(N), if TLE error happens switch to map

unordered_map has no sorting it stores keys randomly
also in normal map you can make anything a key pairs, other data structures..
but for unordered_map only primitive data types are allowed

*/

// Q) Given an Array find the frequencies of each query given by user

#include <bits/stdc++.h>
using namespace std;



int main(){
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    //Pre-compute
    unordered_map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]] += 1;
    }
    
    //Printing
    for(auto it : mpp){
        cout << it.first <<" -> "<< it.second<<endl;
    }
    
    //fetching
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number]<<endl;
    }
}


/*

Input : 
8
1 2 3 1 3 2 12 3
5
1
2
3
4
12

Output : 
3 -> 3
12 -> 1
2 -> 2
1 -> 2
2
2
3
0
1



*/