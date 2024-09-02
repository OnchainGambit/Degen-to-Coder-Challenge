class Solution {
  sumHighestAndLowestFrequency(nums) {
     
      let n = nums.length;
      let mpp = new Map();
      let maxFreq = 0;
      let minFreq = 10000;

      for (let i = 0; i < n; i++) {
      mpp.set(nums[i], (mpp.get(nums[i]) || 0) + 1);
      }

      for (let freq of mpp.values()) {
      maxFreq = Math.max(maxFreq, freq);
      minFreq = Math.min(minFreq, freq);
      }

      return (maxFreq + minFreq);
  }
}
