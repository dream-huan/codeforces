#include<bits/stdc++.h>
using namespace std;
#define int long long

int dp[1000005];

int solve(int x){
    for(int i=1;i*i<=1000000;i++){
        if(abs(dp[i]-x)==0) return i;
        x+=dp[i];
    }
    return -1;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin>>x;
    for(int i=1;i*i<=1000000;i++){
        dp[i]=i*i;
    }
    cout<<solve(x)<<endl;
    return 0;
}