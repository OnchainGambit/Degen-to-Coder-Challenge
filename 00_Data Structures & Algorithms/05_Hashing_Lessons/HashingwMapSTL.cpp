/*

We can use maps for hashing, main con of using arrays is we need to make of size of highest number
Which wastes a lot of spaces, hashmap has the size of number of unique numbers

Every element of map has a key which maps to aother data..
if we do map[3] = 2; where it is a <int,int> map, you may make it <long,int> for higher nums 
or <char,int> for words
Key becomes 3 other number 2

if we do cout << map[2] but we didnot input any 2 it will retuen 0

Also Keys are stored in ascending order

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
    map <int,int> mpp;
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
1 -> 2
2 -> 2
3 -> 3
12 -> 1
2
2
3
0
1


*/