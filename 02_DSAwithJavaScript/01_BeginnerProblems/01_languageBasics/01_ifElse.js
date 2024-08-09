class Solution {
  isAdult(age) {
      if (age >= 18) {
          console.log("Adult");
      } else {
          console.log("Teen");
      }
  }
}

// Simulating user input for demonstration purposes
let age = parseInt(prompt("Enter your age:"));
let solution = new Solution();
solution.isAdult(age);
