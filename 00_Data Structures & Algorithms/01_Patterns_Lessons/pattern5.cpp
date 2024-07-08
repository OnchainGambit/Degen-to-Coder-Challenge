
/*

Input: ‘N’ = 3

Output: 
* * *
* *
*

*/


#include <iostream>
using namespace std;

void seeding(int n) {

	for(int i=1; i <=n;i++){
		for(int j=1; j<=n-i+1; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {

int n;
cin >> n;
seeding(n);

}