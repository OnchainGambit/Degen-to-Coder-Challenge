class Solution {
  divisors(n) {

      let d = [];

      for(let i=0;i<=n;i++){
          if(n%i == 0){
              d.push(i);
          }
      }

      return d;
  }
}