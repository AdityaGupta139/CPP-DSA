#include <bits/stdc++.h>
using namespace std;
int selection(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
            swap(arr[mini], arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };
}

int bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };
}

int insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };
}
void mergee(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(int arr[], int low, int high)
{
    if(low>=high)return;
    int mid = (high + low) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    mergee(arr, low, mid, high);
}
void ms(int arr[],int n){
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ms(arr, n);
}