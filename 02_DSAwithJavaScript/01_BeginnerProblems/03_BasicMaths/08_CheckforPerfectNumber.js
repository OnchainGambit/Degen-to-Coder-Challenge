class Solution {
  isPerfect(n) {

      let sum = 0;

      if(n==1){
          return false;
      }
      else{
          for(let i=1;i*i <= n;i++){
              if(n%i == 0){
                  sum += i;
                  if(i != (n/i) && (n/i)!=n){
                      sum += (n/i);
                  }
              }
          }
      }

      return (sum == n);

  }
}