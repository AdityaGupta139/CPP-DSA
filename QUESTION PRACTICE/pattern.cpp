#include <bits/stdc++.h>
using namespace std;

void patterns(int n)
{
    // 1.
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // 2.
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";

    //     }
    //     cout<<endl;
    // }

    // 3.
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    //  }

    // 4.
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    //  }

    // 5.
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    //  }

    //  6.
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         cout<<"*";

    //     }
    //     for(int j=0;j<n-1-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    //  }

    // 7.

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*n-1-2*i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // 8.

    // for(int i=0;i<2*n;i++){
    //     int stars=i;
    //     if(i>=n)stars=2*n-i;
    //     for(int j=0;j<stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 9.

    // for(int i=1;i<=n;i++){
    //     int start=1;
    //     if(i%2==0){
    //         start=0;

    //     }
    //     // else{
    //     //     start=0;
    //     // }
    //     for(int j=1;j<=i;j++){
    //         cout<<start;
    //         start=1-start;
    //     }
    //     cout<<endl;
    // }
    
    // 10.
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;


    // 10.
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     for(int j=1;j<=2*n-2*i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }

    // 11.
    // int num=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<num<<" ";
    //         num++;

    // }


    // 11.
    // for(int i=0;i<n;i++){
    //     for(char ch='A';ch<='A'+i;ch++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    // 12.

    // for(int i=0;i<n;i++){
    //     for(char ch='A';ch<='A'+n-i-1;ch++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }
    // 13.
    // for(int i=0;i<n;i++){
    //     char ch='A'+i;
    //     for(int j=0;j<=i;j++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }
    // 14.
    // for(int i=0;i<n;i++){
    //     for(char ch='E'-i;ch<='E';ch++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }
    // 15.
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<i+i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }
    // for(int i=0;i<n;i++){
    //    for(int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*n-2*i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }

    // 16.
    
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)stars=2*n-i;
        int space=2*n-2*i;
        if(i>n)space=2*i-2*n;

        
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}



int main(){
    int n;
    cout << "Enter the size:";
    cin >> n;
    patterns(n);
    return 0;
}