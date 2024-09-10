// we can brute force every anagram of the first string but that's sub-optimal
// key is prefix, that means the common subdstring will be in beginning
// first and last in array will have the most uncommon just compare those

class Solution {
  longestCommonPrefix(str) {
      
      if(str.length == 0) return "";

      str.sort();

      let commonPrefix = "";

      let str1 = str[0];
      let str2 = str[str.length-1];

      for(let i=0;i<Math.min(str1.length, str2.length);i++){
          if(str1[i] != str2[i]){
              return commonPrefix;
          }
          commonPrefix += str1[i];
      }

      return commonPrefix;
  }
}