class Solution {
  pattern8(n) {

      for(let i=1;i<=n;i++){

          //White Space
          for(let w=1;w<i;w++){
              process.stdout.write(' ');
          }

          //Stars
          for(let j=1;j<=(n*2)-(2*i)+1;j++){
              process.stdout.write('*');
          }

          console.log();
      }

  }
}