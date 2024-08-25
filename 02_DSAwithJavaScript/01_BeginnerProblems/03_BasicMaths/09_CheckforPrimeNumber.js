class Solution {
  isPrime(n) {
        //your code goes here

        for(let i=2;i*i<=n;i++){
          if(n%i==0){
              return false;
          }
        }

        return true;
  }
}
