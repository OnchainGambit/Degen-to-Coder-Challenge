#include<bits/stdc++.h>
using namespace std;

int main(){

/*
Output :

Orange 5
Orange 10
Orange 15
Orange 20
Orange 25

*/

// For  Loop 
cout << "For Loop :\n\n";
for (int i = 5; i <= 25; i += 5){
    cout << "Orange " << i << endl ;
}

cout << endl;

// While loop
cout << "While Loop :\n\n";
int J = 5;
while (J <= 25){
    cout << "Orange " << J << endl;
    J += 5;
}

cout << endl;

// Do While Loop (Atleast runs 1 time)
cout << "Do While Loop : \n\n";
int k = 5;
do {
    cout << "Orange " << k << endl;
    k += 5;
} while (k <= 25);

}