// odd number is odd if last digit is odd, so from end we search index with odd number
// from first index we go till there are no zeores
// inbetween both indexes is the number

class Solution {
  largeOddNum(s) {
      
      let lastindex;
      for(let i = s.length - 1; i>=0;i--){
          if((s[i] - '0') % 2 != 0){
              lastindex = i;
              break;
          }
      }

      let firstindex;
      for(let i = 0; i <= lastindex;i++){
          if(s[i] != '0'){
              firstindex = i;
              break;
          }
      }

      return s.substring(firstindex, lastindex+1);
  }
}