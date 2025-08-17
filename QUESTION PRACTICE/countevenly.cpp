#include<bits/stdc++.h>
using namespace std;
int evenlyDivides(int N){
        int count=0;
        while(N>0){
            int ld=N%10;
            if(N%ld==0){
                count++;
            }
            N=N/10;
        }
        cout<<count;
    }
    int main(){
        int n;
        cin>>n;
        evenlyDivides(n);
    }
    // a