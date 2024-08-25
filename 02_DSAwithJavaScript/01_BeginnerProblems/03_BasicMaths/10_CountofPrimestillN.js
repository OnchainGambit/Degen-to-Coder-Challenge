class Solution {

  isPrime(n) {

        if(n==1) return false;

        for(let i=2;i*i<=n;i++){
          if(n%i==0){
              return false;
          }
        }

        return true;
  }

    primeUptoN(n) {

        let count = 0;
        for(let i=1;i<=n;i++){
            if(this.isPrime(i)){
                count++;
            }
        }

        return count;

    }
}