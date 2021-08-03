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
        int n,a[200005],l,r;
        cin>>n>>l>>r;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(upper_bound(a,a+n,r-a[i])-a);
            ans-=(lower_bound(a,a+n,l-a[i])-a);
            if(l<=2*a[i]&&2*a[i]<=r) ans--;
        }
        cout<<ans/2<<"\n";
    }
    return 0;
}