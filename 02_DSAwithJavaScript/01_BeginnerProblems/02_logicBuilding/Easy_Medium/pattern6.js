class Solution {
  pattern6(n) {

      for(let i=1;i<=n;i++){
          for(let j=1;j<=n-i+1;j++){
              process.stdout.write(j.toString());
          }
          console.log();
      }

  }
}