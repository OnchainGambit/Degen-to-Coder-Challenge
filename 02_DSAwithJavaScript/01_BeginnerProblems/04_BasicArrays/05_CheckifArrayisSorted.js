// The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

class Solution {
  arraySortedOrNot(arr, n) {
      if(n < 2){
          return true;
      }
      else{
          for(let i=1;i<n;i++){
              if(arr[i-1] > arr[i]){
                  return false;
              }
          }
          return true;
      }
  }
}