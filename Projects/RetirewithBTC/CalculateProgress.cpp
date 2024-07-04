#include <bits/stdc++.h>
using namespace std;

int main(){
    
    double cBTC, tBTC, tPrice, monthlyexpenses, expectedyeild;
    
    //current Bitcoin Amount
    cin >> cBTC;
    
    //Target BTC price after 7-8 Years
    cin >> tPrice;
    
    //Montly expenses you will have
    cin >> monthlyexpenses;
    
    // Expected yeild you can make from stable coins
    cin >> expectedyeild;
    
    tBTC = (((monthlyexpenses * 12)/expectedyeild)*100)/tPrice;
    
    cout << "Target BTC Amount = "<< tBTC <<" ($"<<(tBTC*tPrice)<<")"<<endl;
    cout << "Progress = "<<(cBTC/tBTC)*100<<"%";
}