#include<bits/stdc++.h>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter principle amount:";
    cin>>p;
    cout<<"rate:";
    cin>>r;
    cout<<"time period:";
    cin>>t;
    float si=(p*r*t)/100.0;
    cout<<"simple interest is:"<<si;
}