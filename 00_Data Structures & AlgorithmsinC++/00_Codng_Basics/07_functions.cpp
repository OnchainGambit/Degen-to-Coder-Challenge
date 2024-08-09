#include<bits/stdc++.h>
using namespace std;

/*

void -> Which doesn't return
return type -> int, double, char, string, array, etc
parameterised
non parameterised
in-built 

*/

// non-return type
void printName(){
    cout << "Hi Paul" << endl ;
}

// return type
void greetName(string n){
    cout << "Hi " << n << endl;
}

// parameterised
int sum(int a, int b){
    return (a+b);
}

int main(){

printName(); // Hi Paul

string n;
cin >> n;

greetName(n);

int a,b;
cin >> a >> b;

cout << sum(2,3) << " " << sum(5,15) << endl; // 5 20

// in-built
cout << max (6,9) << endl; // 9
cout << min (6,9) << endl; // 6

}