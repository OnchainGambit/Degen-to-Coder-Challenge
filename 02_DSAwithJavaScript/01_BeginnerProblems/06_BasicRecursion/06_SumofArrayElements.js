class Solution {
  arraySum(nums) {
      
      const summ = (nums,index) => {
          if(index >= nums.length){
              return 0; // base case
          }
          else{
              return nums[index] + summ(nums,index+1);
          }
      }

      let sum = summ(nums, 0);
      return sum;

  }
}