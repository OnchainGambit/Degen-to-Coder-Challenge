// Insertion Sort -> Inserting the minimum
// Time Complexity (best,average,worst) = O(N^2)

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    selection_sort(arr,n);
    
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