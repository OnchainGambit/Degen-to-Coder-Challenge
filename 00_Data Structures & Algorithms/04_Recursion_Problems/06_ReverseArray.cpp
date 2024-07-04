// Reverse an Array

#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n){
    
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse(i+1,arr,n);
}

int main(){
    
    int n;
    int arr[n];
    
    cin >> n;
    
    // Initializing Array
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    // Calling Function
    reverse(0, arr, n);
    
    // Printing Reversed Array
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    
}

/*

Input : 
5
1 2 3 4 5
Output : 
5 4 3 2 1 
*/