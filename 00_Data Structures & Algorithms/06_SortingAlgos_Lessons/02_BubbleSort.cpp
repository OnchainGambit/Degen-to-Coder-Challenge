// Bubble Sort -> Bubbling the highest element at the end using adjacent swappings
// Time Complexity (average,worst) = O(N^2), (Best) = O(N) if it's sorted already

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        int didswap = 0; //Optimization
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    bubble_sort(arr,n);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

/*

Input :
6
13 46 24 52 20 9

Output :
9 13 20 24 46 52 

*/