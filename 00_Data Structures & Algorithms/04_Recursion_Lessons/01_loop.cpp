#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void print(){
    if(cnt == 3) return;
    cout << cnt << " ";
    cnt++;
    print();
}

int main(){
    print(); // 0 1 2
}