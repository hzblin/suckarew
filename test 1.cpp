# suckarew
#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string x;
    int n, d;
    cout<<"enter your name: ";
    cin>>x;
    cout<<"enter number and degree: ";
    cin>>n>>d;
    ans=pow(n,d);
    switch(ans){
        case 1: ans = 16; break;
        default: cerr<<"fool";
    }
}

