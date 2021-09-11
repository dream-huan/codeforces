#include<bits/stdc++.h>
using namespace std;
#define int long long

pair<int,int> a[1000005];
int dp[1000005];

void solve(){
    int t,m;
    cin>>t>>m;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<m;i++) cin>>a[i].first>>a[i].second;
    for(int i=0;i<m;i++){
        for(int j=a[i].first;j<=t;j++){
            dp[j]=max(dp[j],dp[j-a[i].first]+a[i].second);
        }
    }
    cout<<dp[t]<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}