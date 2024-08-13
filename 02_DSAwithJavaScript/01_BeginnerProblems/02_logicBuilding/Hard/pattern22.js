// Solving based on Mathematical pattern
class Solution {
  pattern22(n) {

      // Outer loop for rows
      for(let i=0;i<2*n-1;i++){
          // Inner loop for columns
          for(let j=0;j<2*n-1;j++){

              // Distances from
              let top = i;
              let bottom = (2*n-2)-i;
              let left = j;
              let right = (2*n-2)-j;

              let mini = Math.min(Math.min(top,bottom),Math.min(left,right));
              process.stdout.write((n-mini).toString()+' ');
          }
          console.log();
      }
  }
}