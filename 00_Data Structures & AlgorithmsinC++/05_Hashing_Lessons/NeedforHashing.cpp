/*

Suppose you have an array and you want to find frequencies of many of the numbers in it.
Example : Array = 1,4,1,8,1,4
Freq of 
1 is 3
4 is 2
8 is 1
3 is 0

We can go at in two seperate ways

1. Basic Linear Iteration :-

        for N size array and M number of requests for frequency 
        Time Complexity = O(M x N)
        if size of array is 10^5 and number of requests 10^5,
        Total Iterations will be 10^10, 10^8 takes 1 sec to finish
        10 ^ 10 will take 100 seconds which is too long
        
2. Hashing (Pre-storing and fetching) :- 

        if the max element in the array is P, Create a seperate Hashing array H of size P+1
        Go through Original array and increment the index of hashing array
        if element 3 is found then increment H[3] by 1
        In similar fashion we precompute the entire array's frequencies
        
Additional Info if int array is made in main it can have max size 10^6 if global then 10^7
        
*/

#include <bits/stdc++.h>
using namespace std;



int main(){
    
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    //precompute
    int hash[1000000] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }
    
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number]<<endl;
    }
    
}
/*

Input : 
10
1 2 6 2 2 5 7 5 44 2
5
1
5
2
7
99

Output : 
1
2
4
1
0

*/