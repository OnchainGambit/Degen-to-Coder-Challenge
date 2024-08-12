class Solution {
  pattern14(n) {

      for(let i=1;i<=n;i++){
          for(let j=65;j<=i+65-1;j++){
              process.stdout.write(String.fromCharCode(j));
          }
          console.log();
      }

  }
}