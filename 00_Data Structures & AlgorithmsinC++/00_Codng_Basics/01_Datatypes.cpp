#include <bits/stdc++.h>
using namespace std;
int main() {

// All Data types : int, long, long long, float, double, string, string with getline, char

// Ranges
// int = [-10 ^ 9, 10 ^ 9]
// long = [-10 ^ 12, 10 ^ 12]
// long long = [-10 ^ 18, 10 ^ 18]

// int
int a  = 10;

// long
long b = 1000;

// long long 
long long c = 1000000;

// float, double

float f = 1.5;
double d = 3.146578;

// string and getline

string s;
cin >> s;
cout << s << endl;

// Input : "hey bro"
// Output : "hey"
// coz string only picks up till it encounters space or \n and ignores everthing after

string s1,s2;
cin >> s1 >> s2;
cout << s1 << s2 << endl;

// I : "hey bro"
// O : "heybro"

// To input complete line

string str;
getline(cin, str);

cout << str << endl;
// get line can also pick single \n printing blank and terminate when it encounters \n

// char

char ch = 'z';
cout << ch;


}
