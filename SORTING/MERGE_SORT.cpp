#include<bits/stdc++.h>
using namespace std;
void M(vector<int>&arr,int low, int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<= mid && right <= high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];

    }

}
void m_sort(vector<int>&arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    m_sort(arr,low,mid);
    m_sort(arr,mid+1,high);
    M(arr,low,mid,high);
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    m_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
