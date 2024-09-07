// Don't use recursion for large testcases 

class Solution {
  reverseString(s) {
      let left = 0;
      let right = s.length - 1;
      while (left < right) {
          // swapping
          let temp = s[left];
          s[left] = s[right];
          s[right] = temp;
          left++;
          right--;
      }
      return s;
  }
}