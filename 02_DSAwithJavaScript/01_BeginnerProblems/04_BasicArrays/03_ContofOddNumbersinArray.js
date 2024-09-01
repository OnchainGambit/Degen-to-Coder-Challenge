class Solution {
  countOdd(arr, n) {
  let cnt = 0;
  for(let i=0;i<n;i++){
      if(arr[i] %2 != 0 ){
          cnt++;
      }
  }
  return cnt;
  }
}