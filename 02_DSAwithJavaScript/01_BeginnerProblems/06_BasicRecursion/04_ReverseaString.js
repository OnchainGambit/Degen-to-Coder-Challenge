class Solution {

  reverse(s, left, right) {
      if(left >= right){
          return; // over
      }

      // swapping
      let temp;
      temp = s[left];
      s[left] = s[right];
      s[right] = temp;

      this.reverse(s,left+1,right-1);
  }

  reverseString(s) {
      this.reverse(s, 0, s.length-1);
      return s;
  }
}