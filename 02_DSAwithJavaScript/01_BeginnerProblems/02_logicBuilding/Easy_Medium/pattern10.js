class Solution {
  //Function to print pattern10
  pattern10(n) {
      // Outer loop for number of rows.
      for (let i = 1; i <= 2 * n - 1; i++) {
          /* stars would be equal to the
          row no. uptill first half*/
          let stars = i <= n ? i : 2 * n - i;
          
          // for printing the stars in each row.
          for (let j = 1; j <= stars; j++) {
              process.stdout.write("*");
          }
          
          /* As soon as the stars for each iteration are printed,
          we move to the next row and give a line break*/
          console.log();
      }
  }
}

let N = 5;

//Create an instance of Solution class
let sol = new Solution();

sol.pattern10(N);
