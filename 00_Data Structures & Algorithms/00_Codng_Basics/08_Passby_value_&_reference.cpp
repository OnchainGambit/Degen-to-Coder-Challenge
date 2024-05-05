#include<bits/stdc++.h>
using namespace std;


// Pass by value --> sending a copy
void doit(string str){
    str[0] = 't';
    cout << str << endl;
}

// Pass by reference --> sending original variabe
// NOTE : Only Arrays are by default pass by reference no need &
void doitforreal(string &s){
    s[0] = 't';
    cout << s << endl;
}


int main(){

string s = "raj";

cout << s << endl;
doit(s);
cout << s << endl;
/*

raj
taj
raj

*/

cout << endl;

cout << s << endl;
doitforreal(s);
cout << s << endl;
/*

raj
taj
taj (origial value changed)

*/

}
