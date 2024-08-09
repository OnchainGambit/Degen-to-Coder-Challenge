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

void explainVector(){
    

}

int main(){
    
    //Basics
    
    vector<int> v;  // creates {}
    
    v.push_back(1); // {1}
    v.emplace_back(2); // {1,2}  dynamically changes sizeof
    
    cout << v[0] << " " << v[1] <<endl; // 1 2
    
    // Pair data type vector
    
    vector<pair<int,int>> vec; // creates {}
    
    vec.push_back({1,2});
    vec.emplace_back(4,5); //automatically understands pair
    
    cout << vec[1].first << endl; // 4
    
    // Defining Vector with pre-defined size, although vector size is Dynamic can always inc/dec
    
    vector<int> v1(5); // {0,0,0,0,0}
    vector<int> v2(5, 100); // {100,100,100,100,100}
    
    // copy other vector
    
    vector<int> v3(5,20);
    vector<int> v4(v3);
    
    // iterators, stores address of vector index, use '*' to get value
    
    vector<int> v5({1,2,3,4,5}); 
    vector<int>::iterator it = v5.begin(); // gives address of v5[0]
    it++;
    cout << *(it) <<endl; // 2
    it +=2;
    cout << *(it) <<endl; // 4
    
    vector<int>::iterator itt = v5.end(); // gives address of v5[5] yes one after actual last one
    cout << *(--itt) <<endl; //5
    
    /* Not so used 
    
     vector<int>::iterator it = v5.rend();  ---> points to v5[-1]
     vector<int>::iterator it = v5.rbegin(); --> points to v5[4]
     
     speciality of these is if you do it++ actually it will go it--
    */
    
    cout << v5.back() <<endl; // 5 --> basically v[4];
    
    //Normal printing
    
    for (int it=0;it<v5.size();it++){
        cout << v5[it] << " ";
    }
    cout << endl;
    
    // shortest way using auto, also called for each loop
    
    for (auto it : v5){
        cout << it <<" ";
    }
    cout << endl;
    
    // Print with iterator
    
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
    // making it shorter using 'auto' = automatically assigns data type based on input
    
    for (auto it = v5.begin(); it != v5.end(); it++){
        cout << *(it) <<" ";
    }
    cout << endl;
    
    // Erase elements
    
    vector<int> v6({1,2,3,4,5,6,7,8,9});
    
    v6.erase(v6.begin() + 1); // {1,3,4,5,6,7,8,9}
    
    v6.erase(v6.begin() + 3, v6.begin() + 6); // {1,3,4,8,9} [start, end)
    
    // Insert Functions
    
    vector<int> v7(2,100); // {100,100}
    v7.insert(v7.begin(), 300); // {300,100,100}
    v7.insert(v7.begin() + 1, 2,10); // {300,10,10,100,100}
    
    vector<int> copy(2,50); // {50,50}
    v7.insert(v7.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
    
    // Other Functions
    
    // size
    cout << v7.size() << endl; // 7
    
    // pop back
    v7.pop_back(); // removes last element {50,50,300,10,10,100}
    
    // swap
    
    // v1 -> {10,20}
    // v2 -> {30,40}
    // v1.swap(v2) // v1 -> {30,40}, v2 -> {10,20}
    
    // clear
    v7.clear(); //empties entire vector
    
    // empty
    
    cout << v6.empty() << endl; // 0
    v6.clear();
    cout << v6.empty(); // 1
    
    
    
    
}