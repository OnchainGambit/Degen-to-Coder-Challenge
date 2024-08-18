class Solution {
  largestDigit(n) {

      let largest_digit = 0;

      while(n>0){
          let digit = n%10;
          if(digit > largest_digit){
              largest_digit = digit;
          }
          n = Math.floor(n/10);
      }

      return largest_digit;

  }
}