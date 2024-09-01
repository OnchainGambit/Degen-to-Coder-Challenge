class Solution {
  reverse(arr, n) {

      // Shortcut
      // arr.reverse();

      let r = [];
      for(let i=0;i<n;i++){
          r[n-1-i] = arr[i];
      }

      for(let i=0;i<n;i++){
          arr[i] = r[i];
      }

  }
}