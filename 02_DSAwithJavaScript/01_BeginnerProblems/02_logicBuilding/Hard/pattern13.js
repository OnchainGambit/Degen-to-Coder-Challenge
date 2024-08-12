class Solution {
  pattern13(n) {

      let num = 1;

      for(let i=1;i<=n;i++){
          for(let j=1;j<=i;j++){
              process.stdout.write(num.toString()+' ');
              num++;
          }
          console.log();
      }

  }
}