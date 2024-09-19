class Solution {
  rotateString(s, goal) {
      //your code goes here
      let n= s.length;
      for(let i=0;i<n;i++){
          let first = s.substring(0,i);
          let second = s.substring(i);

          if((second + first) === goal){
              return true;
          }
      }

      return false;
  }
}