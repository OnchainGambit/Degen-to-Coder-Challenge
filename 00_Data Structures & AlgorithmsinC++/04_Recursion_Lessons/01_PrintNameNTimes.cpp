#include <bits/stdc++.h>
using namespace std;

string name;

void printName(int i, int N){
	if(i > N) return;
	cout << name << endl;
	i++;
	printName(i,N);
}

int main(){
	cin >> name;
	int N;
	cin >> N;
	printName(1,N);
}