#include <bits/stdc++.h>
using namespace std;

void largest(vector<int> arr, int n)
{
    // brute

    // sort(arr.begin(),arr.end());

    // cout<<arr[n-1];

    // optimal

    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    cout << arr[largest];
}

// second largest
int second_largest(vector<int> arr, int n)
{
    int largest = arr[0];
    int sl = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sl = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sl)
        {
            sl = arr[i];
        }
    }
    cout << sl;
    return 0;
}

// check_sorted
bool check_sorted(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            return true;
        }
        else
            return false;
    }
}

int removeDuplicates(vector<int> &arr)
{
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

void leftRotateOne(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void leftrotatebyD(vector<int> &arr, int n, int d)
{

    vector<int> temp(d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (int i = n - d; i <= n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}
void MovezeroestoEnd(vector<int> &arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.emplace_back(arr[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }
    int nz = temp.size();
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }
}

void MovezeroestoEndOptimal(vector<int> &arr, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
}

int LinearSearch(vector<int> arr, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

void Union(vector<int> a, vector<int> b, int n, int m)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(b[i]);
    }

    for (auto it : st)
    {
        cout << it << " ";
    }
}

vector<int> UnionOPtimal(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i, j = 0;
    vector<int> unionarr;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
        while (j < m)
        {
            if (unionarr.size() == 0 || unionarr.back() != b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
        while (i < n)
        {
            if (unionarr.size() == 0 || unionarr.back() != a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
    }
}
int missingNumber(vector<int> &a)
{
    int n = a.size();
    int sum = n * (n + 1) / 2;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s2 = a[i] + s2;
    }
    return (sum - s2);
}
int findMaxConsecutiveOnes(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    int mxcnt;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            mxcnt = max(mxcnt, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return mxcnt;
}

int singleNumber(vector<int> &a)
{
    int XOR = 0;
    for (int i = 0; i < a.size(); i++)
    {
        XOR = XOR ^ a[i];
    }
    return XOR;
}

vector<int> twoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<int> ans;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            ans.push_back(mpp[more]);
            ans.push_back(i);
        }
        mpp[a] = i;
    }

    return ans;
}
void sortColors(vector<int> &a)
{
    int n = a.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {

            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}
int majorityElement(vector<int>& a) {
        int n=a.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        for(auto it:mpp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
sum=0;
            }
        }
        return maxsum;
    }

        vector<int> rearrangeArray(vector<int>& a) {
        int n=a.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                pos.push_back(a[i]);
            }
            else{
                neg.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[i]=pos[i/2];
              
            }
            else{
                a[i]=neg[(i-1)/2];
            }
            
        }
        return a;
    }

        void nextPermutation(vector<int>& arr) {
        int ind = -1;
        int n = arr.size();
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                ind = i;
                break;
            }
        }
        if(ind==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=n-1;i>=ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1,arr.end());
    }

    // 


 void leaders(vector<int>&a,int n) {
    //   int n=a.size();
      vector<int>ans;
      
      for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                leader=false;
                break;
            }
            
        }
        
if(leader==true){
    ans.push_back(a[i]);
}
      }

      for(auto it:ans){
        cout<<it<<" ";
    }
    }

     int longestConsecutive(vector<int>& a,int n) {
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(a[j]==a[i]+1 || a[j]==a[i]-1){
                    cnt++;
                    maxi=max(maxi,cnt);
                }
            }
        }
        cout<<maxi;
        return 0;

    }

        void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>col(m,0);
        vector<int>row(n,0);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
       
    }

    //  fsf

int main()
{
    int n;
    cout << "Enter size of 1st array:";
    cin >> n;
    vector<int>a(n);
    cout << "Enter Elements of 1st Array:";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   
    longestConsecutive(a,n);
    
}