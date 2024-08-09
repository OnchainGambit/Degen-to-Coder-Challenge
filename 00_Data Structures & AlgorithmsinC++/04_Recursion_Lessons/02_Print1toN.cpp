#include <bits/stdc++.h>
using namespace std;

void print1toN(int i, int N){
	if(i>N) return;
	cout << i << " ";
	print1toN(++i,N);
}

int main(){
	int n;
	cin >> n;
	print1toN(1,n);
}