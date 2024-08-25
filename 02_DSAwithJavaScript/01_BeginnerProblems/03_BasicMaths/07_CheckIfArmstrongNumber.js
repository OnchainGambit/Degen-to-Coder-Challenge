class Solution {
  isArmstrong(n) {

      let m = n.toString().length;
      let sample = n;
      let sum = 0;

      while(n>0){
          let digit = n%10;
          sum += Math.pow(digit,m);
          n = Math.floor(n/10);
      }

      if(sum == sample){
          return true;
      }
      else {
          return false;
      }

  }
}