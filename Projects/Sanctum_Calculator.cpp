#include <bits/stdc++.h>
using namespace std;
int main() {
// input your pet level, level you want to reach, sol amout in order
int n1, n2;
cin >> n1;
cin >> n2;

int sum = 0;
for (int i=n1-1; i < (n2-1); i++){
    sum += (150*pow(1.10448,i));
}

double sol_amount;
cin >> sol_amount;

double speed, distance;
int time;

speed = 10 * sol_amount;
distance = sum;
time = distance/speed;
int days = time / 1440;
int hours = (time / 60) - (days*24);
int minutes = time - (hours*60) - (days*1440);

cout << "----------------------------------------------------\n";
cout << "   WELCOME TO SANCTUM PET LEVEL UP TIME CALCULATOR\n";
cout << "----------------------------------------------------\n\n";
cout << "Current Pet Level : "<< n1 << endl;
cout << "Desired Pet Level : "<< n2 << endl;
cout << "SOL Amount : " << sol_amount << endl;
cout <<"\nTime Required = "<< days << " days, " << hours << " hours, " << minutes << " mins.";

}
