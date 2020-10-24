#include<bits/stdc++.h>
using namespace std;
int n,a[200005],dp[200005],sum=(-1)*(INT_MAX);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        dp[i]=max(dp[i-1]+a[i],a[i]);
        sum=max(sum,dp[i]);
    }
    cout<<sum<<endl;
    return 0;
}