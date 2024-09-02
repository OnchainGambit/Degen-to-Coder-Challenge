class Solution {
  secondMostFrequentElement(nums) {
    let maxFreq = 0;
    let mpp = new Map();
    let secMaxFreq = 0;
    let secMaxEle = -1;

    for (let i = 0; i < nums.length; i++) {
      mpp.set(nums[i], (mpp.get(nums[i]) || 0) + 1);
    }

    for (let freq of mpp.values()) {
      maxFreq = Math.max(maxFreq, freq);
    }

    for (let [ele, freq] of mpp) {
      if (freq != maxFreq) {
        if (freq > secMaxFreq) {
          secMaxFreq = freq;
          secMaxEle = ele;
        } else if (freq == secMaxFreq) {
          secMaxEle = Math.min(secMaxEle, ele);
        }
      }
    }

    return secMaxFreq > 0 ? secMaxEle : -1;
  }
} 