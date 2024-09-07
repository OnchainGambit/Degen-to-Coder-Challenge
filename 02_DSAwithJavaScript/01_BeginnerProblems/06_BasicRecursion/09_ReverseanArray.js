class Solution {
  reverseArray(nums) {
      
      const rev = (arr, left, right) => {
          if(left >= right){
              return;
          }
          else{
              let temp = arr[left];
              arr[left] = arr[right];
              arr[right] = temp;

              rev(arr, left+1, right-1);
          }
      };

      rev(nums,0,nums.length-1);
      return nums;
  }
}