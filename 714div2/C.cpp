#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod=1e9+7;
const int N=2*1e5+5;
vector<int>dp(N);

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=0; i<9; i++)dp[i] = 2;
    dp[9] = 3;
    for(int i=10; i<N; i++){
        dp[i] = (dp[i-9] + dp[i-10])%mod;
    }
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=0;
        while(n){
            int x=n%10;
            ans+=(m+x<10?1:dp[m+x-10]);
            ans%=mod;
            n/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}