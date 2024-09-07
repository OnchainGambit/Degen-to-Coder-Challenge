class Solution {
  isSorted(nums) {
      
      const check = (arr,i) => {
          if(i == arr.length - 1){
              return true;
          }
          else if(arr[i+1] < arr[i]){
              return false;
          }
          else{
              return check(arr, i+1);
          }
      }

      return check(nums,0);
  }
}