class Solution {
  reverseNumber(n) {

      let rev=0;

      while(n > 0){
          rev = (rev*10)+(n%10);
          n = Math.floor(n/10);
      }

      return rev;
  }
}