class Solution {
  pattern18(n) {

      for(let i=1;i<=n;i++){
          for(let j=n+65-i;j<=n+64;j++){
              process.stdout.write(String.fromCharCode(j)+' ');
          }
          console.log();
      }

  }
}