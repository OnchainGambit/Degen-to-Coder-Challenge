class Solution {
  pattern12(n) {

      for(let i=1;i<=n;i++){

          //numbers left section
          for(let j1=1;j1<=i;j1++){
              process.stdout.write(j1.toString());
          }

          //space in middle
          for(let j2=1;j2<=(n*2)-(i*2);j2++){
              process.stdout.write(' ');
          }

          //numbers right section
          for(let j3=i;j3>=1;j3--){
              process.stdout.write(j3.toString());
          }
          console.log();
      }

  }
}