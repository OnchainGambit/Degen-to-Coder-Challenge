class Solution {
  printX(X, N) {
      
      // .fill(x) -> Fills the whole array with x
      // .fill(x,i,j) -> Fills array with x from i to j-1
      // .join(' ') -> Outputs a String concatinating all array elements with ' '

      // Making Array using array Constructor

      let a = new Array(N);
      console.log(a.fill(X).join(' '));
  } 
}