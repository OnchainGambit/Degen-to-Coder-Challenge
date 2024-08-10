class Solution {
  pattern7(n) {

      for(let i=1;i<=n;i++){

          // White Space
          for(let w=n-i;w>=1;w--){
              process.stdout.write(" ");
          }

          // Stars
          for(let j=1;j<=(2*i)-1;j++){
              process.stdout.write('*');
          }

          console.log();
      }

  }
}