// C++ STL

/*

devide into 4 parts
1. Algorithms
2. Containers 
3. Functions
4. Iterators

*/

#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;
    
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
    
    // Unique to list you can also push front, in vector you needed to insert
    
    ls.push_front(5); // {5,2,4}
    ls.emplace_front(6); // {6,5,2,4}
    
    // Rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    
    for(auto it : ls){
        cout << it << " ";
    }

}

int main(){
    
    explainList();
    
}