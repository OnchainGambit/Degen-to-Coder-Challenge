class Solution {
  pattern9(n) {

    //Pyramid
    for(let i=1;i<=n;i++){

      for(let w=1;w<=n-i;w++){
          process.stdout.write(" ");
      }
      for(let s=1;s<=i*2-1;s++){
          process.stdout.write('*');
      }
      console.log();
    }

    //Inverted Pyramid
    for(let i=1;i<=n;i++){

      for(let w=1;w<i;w++){
          process.stdout.write(" ");
      }
      for(let s=n*2-1;s>=i*2-1;s--){
          process.stdout.write('*');
      }
      console.log();
    }
  }
}