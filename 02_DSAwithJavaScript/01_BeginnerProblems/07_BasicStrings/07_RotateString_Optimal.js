class Solution {
  // Strings must be of the same length to be rotations of each other
     rotateString(s, goal) {
         if (s.length !== goal.length) {
             return false;  
         }
         let doubledS = s + s;  // Concatenate s with itself
         return doubledS.includes(goal);  // Check if goal is a substring of s + s
     }
 }