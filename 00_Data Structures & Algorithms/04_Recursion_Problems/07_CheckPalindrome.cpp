// Check if String is Palindrome

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    
    checkPalindrome(i+1,s);
}

int main(){
    
    string s1 = "MADAM";
    if(checkPalindrome(0,s1)){
        cout <<"Palindrome"<<endl;
    }
    
    string s2 = "MADNM";
    if(checkPalindrome(0,s2)){
        cout <<"Not a Palindrome"<<endl;
    }
    
}
/*

Input : 

Output : 
Palindrome
Not a Palindrome

*/