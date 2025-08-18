#include<bits/stdc++.h>
using namespace std;
int selection(int arr[],int n){
for(int i=0;i<=n-2;i++){
    int mini=i;
    for(int j=i;j<n;j++){
        if(arr[j]<arr[mini]){
            mini=j;
            
        }
        swap(arr[mini],arr[i]);
    }
}




    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    };
}
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
}