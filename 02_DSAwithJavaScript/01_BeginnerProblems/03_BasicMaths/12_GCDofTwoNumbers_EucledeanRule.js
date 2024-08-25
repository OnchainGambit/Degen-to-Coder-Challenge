// Eucledian Rule Sates that GCD (n2,n1) = GCD (n2-n1,n1), if n2 > n1
// we can do this till one reaches 0 and other one is gcd, we can get there faster by n2%n1

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
}
