#include<bits/stdc++.h>
using namespace std;

void largest(vector<int>arr,int n){
// brute

    // sort(arr.begin(),arr.end());

    // cout<<arr[n-1];

// optimal

int largest=0;
for(int i=0;i<n;i++){
    if(arr[i]>arr[largest]){
        largest=i;
    }

}
cout<<arr[largest];

}

// second largest
int second_largest(vector<int>arr,int n){
    int largest=arr[0];
    int sl=-1;
    for(int i=0;i<n;i++){
if(arr[i]>largest){
 sl=largest;
 largest=arr[i];   
}
else if(arr[i] < largest && arr[i]>sl ){
    sl=arr[i];
}
    }
    cout<<sl;
    return 0;
}

// check_sorted
bool check_sorted(vector<int>arr,int n){
for(int i=1;i<n;i++){
if(arr[i-1]<=arr[i]){
    return true;
}
else return false;

}

}

    int removeDuplicates(vector<int>& arr) {
       int i=0;
       for(int j=1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
       } 
       return i+1;
    }

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<remove_duplicates(arr,n);
}