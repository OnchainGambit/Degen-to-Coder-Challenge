class Solution {
  anagramStrings(s, t) {

      if(s.length != t.length){
          return false;
      }
      else{

          let sHash = Array(256).fill(0);
          let tHash = Array(256).fill(0);

          let n = s.length;

          for(let i=0;i<n;i++){
              sHash[s.charCodeAt(i)]++;
              tHash[t.charCodeAt(i)]++;
          }

          for(let i=0;i<256;i++){
              if(sHash[i] != tHash[i]){
                  return false;
              }
          }

          return true;
      }

  }
}