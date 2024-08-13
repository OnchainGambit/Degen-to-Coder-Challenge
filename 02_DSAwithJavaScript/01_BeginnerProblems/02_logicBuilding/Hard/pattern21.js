class Solution {
  // Function to print pattern21
  pattern21(n) {
      // Outer loop for the rows.
      for(let i = 0; i < n; i++){
          
          /* Inner loop for printing 
          the stars at borders only.*/
          for(let j = 0; j < n; j++){
              
              if(i === 0 || j === 0 || i === n-1 || j === n-1)
                  process.stdout.write("*");
              else
                  process.stdout.write(" ");
          }
          // Move to the next row.
          console.log();
      }
  }
}


