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

    void leftRotateOne(vector<int>&arr,int n){
        int temp=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }

    void leftrotatebyD(vector<int>&arr,int n,int d){

        vector<int>temp(d);
        for(int i=0;i<d;i++){
            temp[i]=arr[i];
        }

        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        int j=0;
        for(int i=n-d;i<=n;i++){
            arr[i]=temp[j];
            j++;
        }

    }
    Movezeroes
    

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int d;
    cout<<"Enter the numbers of rotations:";
    cin>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotatebyD(arr,n,d);
    for(auto it:arr){
        cout<<it<<" ";
    }

}