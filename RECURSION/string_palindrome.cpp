#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(int i,string&s){
    if(i>=s.length()/2)return true;
    if(s[i]!=s[s.length()-i-1])return false;
    return check_palindrome(i+1,s);
}
int main(){
    string s;
    getline(cin,s);
    cout<<check_palindrome(0,s);

}