class Solution {
  isomorphicString(s, t) {
      // Check if lengths are different
      if (s.length !== t.length) return false;
      let sMap = Array(256).fill(0);
      let tMap = Array(256).fill(0);

      for (let i = 0; i < s.length; i++) {
          const sCharIndex = s.charCodeAt(i);
          const tCharIndex = t.charCodeAt(i);

          // Check if there is a mismatch in existing mappings
          if ((sMap[sCharIndex] && sMap[sCharIndex] !== tCharIndex + 1) || 
              (tMap[tCharIndex] && tMap[tCharIndex] !== sCharIndex + 1)) {
              return false;
          }
          // Set the mappings
          sMap[sCharIndex] = tCharIndex + 1;
          tMap[tCharIndex] = sCharIndex + 1;
      }
      return true;
  }
}
