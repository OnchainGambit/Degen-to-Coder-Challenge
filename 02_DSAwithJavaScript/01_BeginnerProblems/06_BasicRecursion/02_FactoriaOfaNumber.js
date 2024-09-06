class Solution {
  factorial(n) {
      if(n == 1 || n == 0){
          return 1;
      }
      else{
          return n * this.factorial(n-1);
      }
  }
}