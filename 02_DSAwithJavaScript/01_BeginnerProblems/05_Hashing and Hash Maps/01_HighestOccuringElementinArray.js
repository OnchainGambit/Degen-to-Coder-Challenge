class Solution {
  mostFrequentElement(nums) {

      let mpp = new Map();
      let maxFreq = 0;
      let maxEle = 0;
      let n = nums.length;

      for(let i=0;i<n;i++){
          mpp.set(nums[i], (mpp.get(nums[i]) || 0)+1);
          //If the element nums[i] already exists in the map, its frequency is incremented. if doesn't exist, it's added to the map with a frequency of 1
          //undefined || 0 = 0
      }

      for(let [ele,freq] of mpp){
          if(freq > maxFreq){
              maxFreq = freq;
              maxEle = ele;
          }
          else if(freq == maxFreq){
              maxEle = Math.min(ele, maxEle);
          }
      }

      return maxEle;

  }
}