// GCD = Greatest Common Divisor, this is conceptual approach

class Solution {
  GCD(n1, n2) {

      for(let i=Math.min(n1,n2); i>=1 ;i--){
          if(n1%i == 0 && n2%i == 0){
              return i;
          }
      }

  }
}
