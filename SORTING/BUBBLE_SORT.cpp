#include <bits/stdc++.h>
using namespace std;
void Bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {int didswap=0;//for best case Time Complexity
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
            
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}