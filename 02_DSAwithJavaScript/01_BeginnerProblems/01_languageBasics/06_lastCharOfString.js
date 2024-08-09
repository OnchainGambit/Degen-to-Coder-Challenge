class Solution {
  lastChar(s) {
      // Strings are immutable in JS same as Java
      let l = s.length;
      return s.charAt(l-1); //s[l-1] works too
  }
}

const solution = new Solution();
const s = "example";
console.log("The last character is:", solution.lastChar(s)); 