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
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s2 = nums[i] + s2;
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

int singleNumber(vector<int> &nums)
{
    int XOR = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        XOR = XOR ^ nums[i];
    }
    return XOR;
}


int main()
{
    int n;
    cout << "Enter size of 1st array:";
    cin >> n;
    vector<int> a(n);
    cout << "Enter Elements of 1st Array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;

    cout << "Enter size of 2nd array:";
    cin >> m;
    vector<int> b(m);
    cout << "Enter Elements of 2nd Array:";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    Union(a, b, n, m);
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }
}