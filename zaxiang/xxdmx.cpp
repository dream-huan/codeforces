#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,p,t,a[1000005],b[1000005],c[1000005];
map<ll,ll>dp;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>p>>t;
    for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    for(int i=0;i<n;i++){
        for(int j=c[i]+b[i];j<=t;j++){
            dp[j]=max(dp[j],dp[j-c[i]-b[i]]+a[i]);
        }
    }
    if(dp[t]>p) cout<<dp[t]-p<<endl;
    else cout<<-1<<endl;
    return 0;
}