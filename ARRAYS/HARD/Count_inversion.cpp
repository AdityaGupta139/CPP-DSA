#include <bits/stdc++.h> 
int cnt=0;
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
            cnt+=(mid-left+1);
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

int numberOfInversions(vector<int>&a, int n){
  m_sort(a,0,n-1);
  return cnt;
}