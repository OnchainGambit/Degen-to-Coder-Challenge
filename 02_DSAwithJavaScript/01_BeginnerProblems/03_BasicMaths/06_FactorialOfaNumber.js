class Solution {
  factorial(n) {

      let m = 1;
      while(n>0){
          m *= n--;
      }
      return m;
  }
}