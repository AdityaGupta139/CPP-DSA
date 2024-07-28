#include <bits/stdc++.h>
using namespace std;
int firstnsum(int n){
if(n == 0)
{
    return 0;
}
return n+firstnsum(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout<<firstnsum(n);
}