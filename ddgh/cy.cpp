#include<bits/stdc++.h>
using namespace std;
int n,x,a[1005],b[1005],c[1005],dp[1000005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    for(int i=0;i<n;i++){
        for(int j=x;j>=c[i];j--){
            dp[j]=max(dp[j]+a[i],dp[j-c[i]]+b[i]);
        }
    }
    cout<<dp[x]*5ll<<endl;
    return 0;
}