#include<bits/stdc++.h>
using namespace std;
void printTable (int n) 
	 {
            int i=n*10;
            while(i>=n)
            {
                cout<<i<<" ";
                i-=n;
            }
     }
     int main(){
        int n;
        cin>>n;
        printTable(n);
     }