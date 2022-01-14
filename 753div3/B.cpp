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
        int x0,n;
        cin>>x0>>n;
        int d;
        if(n%4==0) d=0;
        else if(n%4==1) d=n;
        else if(n%4==2) d=-1;
        else d=-1*n-1;
        if(x0&1) cout<<x0+d<<"\n";
        else cout<<x0-d<<"\n";
    }
    return 0;
}


/* 
0 -1 1 -2 2 -3 3
10 9 11 8 12 7 13 6 14 5 15
-1 2 -3 4 ...
((-1)^n)*n
-1 1 -2 2 -3 3...
Sn=
 */