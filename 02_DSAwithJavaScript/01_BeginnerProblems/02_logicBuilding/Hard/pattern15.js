class Solution {
  pattern15(n) {

      for(let i=1;i<=n;i++){
          for(let j=65;j<=n+65-i;j++){
              process.stdout.write(String.fromCharCode(j));
          }
          console.log();
      }

  }
}