// LCM = (n1 * n2)/gcd(n1,n2)

class Solution {
  GCD(n1, n2) {

      while(n1!=0 && n2!=0){
          if(n1>n2){
              n1 = n1%n2;
          }
          else{
              n2 = n2%n1;
          }
      }

      if(n2 == 0){
          return n1;
      }
      else{
          return n2;
      }

  }

    LCM(n1, n2) {
        let lcm = (n1*n2)/this.GCD(n1,n2);
        return lcm;
    }
}