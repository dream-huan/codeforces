#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,len;
    cin>>n>>len;
    vector<int>v(n);
    vector<int>w(n);
    for(int i=0;i<n;i++) cin>>v[i]>>w[i];
    vector<int> dp(len);
    for(int i=1;i<n;i++){
        for(int j=len;j>=v[i];j--){
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    cout<<dp[len]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}