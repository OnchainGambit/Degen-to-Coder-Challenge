class Solution {
  pattern19(n) {

      for(let i=1;i<=n;i++){

          //Stars left section
          for(let s1=1;s1<=n-i+1;s1++){
              process.stdout.write('*');
          }
          //Space in middle
          for(let w=1;w<=(i-1)*2;w++){
              process.stdout.write(' ');
          }
          //Stars right section
          for(let s1=1;s1<=n-i+1;s1++){
              process.stdout.write('*');
          }
          console.log();
      }

      for(let i=1;i<=n;i++){

          for(let s2=1;s2<=i;s2++){
              process.stdout.write('*');
          }

          for(let w=1;w<=(n-i)*2;w++){
              process.stdout.write(' ');
          }

          for(let s2=1;s2<=i;s2++){
              process.stdout.write('*');
          }
          console.log();
      }

  }
}