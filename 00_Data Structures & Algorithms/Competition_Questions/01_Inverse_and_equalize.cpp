/*

Link :- https://www.codechef.com/problems/INVEQ?tab=statement

You are given a binary string tell the minimum number of flips needed to make it only 1 or only 0

Eg - 101111000

We can make all characters of the string equal in two operations:

Operation 1 : 101111000 -> 100000000
Operation 2 : 100000000 -> 000000000

Ans = 2

*/

// Logic : count the number of 0s and 1s and the minimum of both is number of flips.

#include <bits/stdc++.h>
using namespace std;

int count_consecutive(string s, int n){
    

            int count0 = 0, count1 = 0;
            if(s[0] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            
            for(int i=1;i<n;i++){
                if(s[i]=='0' && s[i-1] != '0'){
                    count0++;
                }
                else if(s[i]=='1' && s[i-1] != '1'){
                    count1++;
                }
            }
            
            return min(count1, count0);
}

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    cout << count_consecutive(s, n) << endl;
	}

}
