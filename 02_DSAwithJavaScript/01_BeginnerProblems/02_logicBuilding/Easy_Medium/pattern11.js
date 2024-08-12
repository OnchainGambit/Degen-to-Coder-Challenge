class Solution {
  pattern11(n) {

      for(let i=1;i<=n;i++){
          for(let j=1;j<=i;j++){
              let num = j%2;
              if(i%2==0){
                  num = 1-num;
              }
              process.stdout.write(num.toString()+' ');
          }
          console.log();
      }

  }
}