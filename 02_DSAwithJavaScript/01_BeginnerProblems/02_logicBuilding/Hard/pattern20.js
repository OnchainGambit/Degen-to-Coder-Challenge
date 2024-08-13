class Solution {
  pattern20(n) {

      for(let i=1;i<=n;i++){

          for(let j=1;j<=i;j++){
              process.stdout.write('*');
          }
          for(let w=1;w<=(n*2)-(i*2);w++){
              process.stdout.write(" ");
          }
          for(let j=1;j<=i;j++){
              process.stdout.write('*');
          }
          console.log();
      }

      for(let i=1;i<n;i++){

          for(let j=1;j<=n-i;j++){
              process.stdout.write('*');
          }
          for(let w=1;w<=2*i;w++){
              process.stdout.write(' ');
          }
          for(let j=1;j<=n-i;j++){
              process.stdout.write('*');
          }
          console.log();
      }

  }
}