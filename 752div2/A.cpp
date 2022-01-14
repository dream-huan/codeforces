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
        int n;
        int ans=0;
        int a[105];
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        int k=1;
        // for(int i=1;;i++) if(a[k]>i) ans+=(a[k]-i),k++,i
        for(int i=1;i<=n;i++){
            // cout<<a[i]<<" "<<k<<"\n";
            if(a[i]>k){
                ans+=(a[i]-k);
                k=a[i];
            }
            k++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}