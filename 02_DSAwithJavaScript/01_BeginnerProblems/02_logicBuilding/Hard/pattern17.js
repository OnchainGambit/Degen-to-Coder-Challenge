class Solution {
  pattern17(n) {

      for(let i=1;i<=n;i++){
          
          //Space
          for(let j=1;j<=n-i;j++){
              process.stdout.write(' ');
          }

          //letters
          for(let l=65;l<i+65;l++){
              process.stdout.write(String.fromCharCode(l));
          }
          for(let j=i+63;j>=65;j--){
              if(j>=65){
                  process.stdout.write(String.fromCharCode(j));
              }
          }

          console.log();            

      }

  }
}