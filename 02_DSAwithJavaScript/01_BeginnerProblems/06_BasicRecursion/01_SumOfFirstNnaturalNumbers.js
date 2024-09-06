class Solution {
  NnumbersSum(N) {
      
      if(N == 1){
          return 1;
      }
      else{
          return N + this.NnumbersSum(N-1);
      }
  }
}