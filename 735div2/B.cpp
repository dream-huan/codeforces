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
        int n,k,a[200005];
        int ans=-1e16;
        int minm=INT_MAX,minx=0;
        int mim=INT_MAX,mix=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        int left=max(1LL*1,n-2*k-1);
        for(int i=left;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                ans=max(ans,i*j-k*(a[i]|a[j]));
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}