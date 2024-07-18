// PAIRS
#include<bits/stdc++.h>
using namespace std;
void pair1(){
    pair<int,int>p={4,7};
    cout<<"Output from the first pair is:";
    cout<<p.first<<" "<<p.second<<endl;
    
    
}
void pair2(){
    pair<int,pair<int,int>>p={1,{5,7}};
    cout<<"Output from the second pair is:";
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}
void pair3(){
pair<int,int>arr[]={{1,3},{5,6},{6,7}};
cout<<"Output from the third pair is:";
cout<<arr[0].second<<" "<<arr[1].second<<" "<<arr[2].first<<endl;
}
int main(){
    pair1();
    pair2();
    pair3();
}