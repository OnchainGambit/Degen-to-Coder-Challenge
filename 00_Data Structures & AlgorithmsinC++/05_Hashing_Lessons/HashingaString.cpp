/*

Given a word give the frequencies of certain charaters in the word
Hint : As total number of char ASCII is 256 that's the array size

*/

#include <bits/stdc++.h>
using namespace std;



int main(){
    
    string word;
    cin >> word;
    
    //Precompute
    int hash[256] = {0};
    for(int i=0;i<word.size();i++){
        hash[word[i]] += 1; // Typecasting char -> int
    }
    
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c]<<endl;
    }
    
}


/*

Input : 
abcdabehf
5
a
g
h
b
c


Output : 
2
0
1
2
1


*/