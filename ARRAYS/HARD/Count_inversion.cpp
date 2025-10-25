#include <bits/stdc++.h> 

int M(vector<int>&arr,int low, int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    int cnt=0;
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
    return cnt;

}
int m_sort(vector<int>&arr,int low,int high){
    int cnt=0;
    if(low>=high){
        return cnt;
    }
    int mid=(low+high)/2;
    cnt+=m_sort(arr,low,mid);
    cnt+=m_sort(arr,mid+1,high);
    cnt+=M(arr,low,mid,high);
    return cnt;
}

int numberOfInversions(vector<int>&a, int n){
  return m_sort(a,0,n-1);
  
}