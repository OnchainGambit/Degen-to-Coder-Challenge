class Solution {
  palindromeCheck(s) {
      
      const palin = (s, left, right) => {
          if(left >= right){
              return true;
          }
          else{
              if(s[left] != s[right]){
                  return false;
              }
              else{
                  return palin(s, left+1, right-1);
              }
          }
      }

      let ans = palin(s,0,s.length-1);
      return ans;

  }
}