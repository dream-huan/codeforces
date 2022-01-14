#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,a[200005],minm=0x3f3f3f3f;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        minm=a[0];
        // int less=0;
        if(a[0]<0){
            int temp=a[0];
            for(int i=0;i<n;i++) a[i]-=temp;
        }
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>minm) minm=a[i+1]-a[i];
        }
        cout<<minm<<"\n";
    }
    return 0;
}

/* 
1 -2 3 -4 5
-3 2 -5 4
-5 -7 2
-7 -9
2
3 2 -4 -2 0
1 -6 -4 -2
3 -4 -2
5 -2
7

1 3 8 199 200
2 7 99 199
5 97 197
92 192
100

1 2 8 9 10
-1 6 7 8
7 8 9


2 10 1 7
1 2 7 10

3 2 -4 -2 0
-4 -2 0 2 3
2 4 6 7

1 2 8 100 101
1 7 99 100
6 98 99
92 97

 */