#include<bits/stdc++.h>
using namespace std;
void firstnsum(int i,int sum){
    if(i<1){
    cout<<sum;
    return;
    }
    firstnsum(i-1,sum+i);
    
}
int main(){
    int n;
    cin>>n;
    firstnsum(n,0);
}