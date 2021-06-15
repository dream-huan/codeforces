#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,temp,ans=0;
        cin>>n;
        unordered_map<int,int>m;
        vector<int>dp(n,0);
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(i>0) dp[i]=dp[i-1];
            if(m.count(a[i])){
                dp[i]+=m[a[i]];
            }
            m[a[i]]=m[a[i]]+i+1;
            ans+=dp[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}