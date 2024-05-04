/*

If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;

    if (m < 25){
        cout<< "Grade F.";
    }
    else if (m <= 44){
        cout << "Grade E.";
    }
    else if (m <= 49){
        cout << "Grade D.";
    }
    else if (m <= 59){
        cout << "Grade C.";
    }
    else if (m <= 69){
        cout << "Grade B.";
    }
    else if (m >= 70){
        cout << "Grade A.";
    }
    else {
        cout << "Invalid marks entered.";
    }
}

