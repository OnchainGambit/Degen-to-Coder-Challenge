class Solution {
  checkPrime(num) {
      if(num <= 1){
          return false;
      }

      //your code goes here
      const checkP = (num, i) => {
          if(i==1){
              return true;
          }
          else if(num % i == 0){
              return false;
          }
          else{
              return checkP(num, i-1);
          }
      }

      return checkP(num, Math.floor(Math.sqrt(num)));
  }
}