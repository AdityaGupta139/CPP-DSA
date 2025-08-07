#include <bits/stdc++.h>
using namespace std;
void maths(int n)
{
    // 1.digits
    // while(n>0){
    //     int n;
    //     n=n%10;
    //     cout<<n;
    //     n=n/10;
    // }
// 2.count 
    // int cnt = 0;
    // while (n > 0)
    // {

    //     n = n / 10;
    //     cnt++;
    // }
    // cout << cnt;


     
        // long long rev=0;
        // while(n!=0){
        //     int ld;
        //     ld=n%10;
        //     rev=rev*10+ld;
        //     n=n/10;

            
        // }
        // return rev;

        // int dup=n;
        // int rev=0;
        // while(n!=0){
        //     int ld;
        //     ld=n%10;
        //     rev=rev*10+ld;
        //     n=n/10;
        // }
        // if (rev==dup){
        //     return true;
        // }
        // else{
        //     return false;
        // }

    //    int cnt=0;
	//        int dup=n;
    //     int arm=0;
    //     int temp=n;
    //     while(temp!=0){
    //         cnt++;
    //         temp=temp/10;
    //     }


    //     while(n!=0){
    //         int ld;
    //         ld=n%10;
    //         arm=arm+pow(ld,cnt);
    //         n=n/10;

    //     }
    //     if(arm==dup){
    //         return true;
    //     }
    //     else{return false;} 
    
    // divisor/
// vector<int>v;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//             v.emplace_back(i);
        
//         if((n/i)!=i){
//             v.emplace_back(n/i);
//         }
//         }
//     }
//     sort(v.begin(),v.end());
//     for(auto it:v){
//         cout<<it<<" ";
//     }


// prime number
    
}

int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    maths(n);
}