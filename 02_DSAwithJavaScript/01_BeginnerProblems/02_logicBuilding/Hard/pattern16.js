class Solution {
  pattern16(n) {

      for(let i=1;i<=n;i++){
          for(let j=1;j<=i;j++){
              process.stdout.write(String.fromCharCode(i+64));
          }
          console.log();
      }

  }
}