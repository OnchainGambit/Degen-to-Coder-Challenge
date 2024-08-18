class Solution {
  countOddDigit(n) {

      let cnt = 0;

      while(n>0){
          let digit = n%10;
          n = Math.floor(n/10);
          if(digit % 2 != 0){
              cnt++;
          }
      }

      return cnt;

  }
}