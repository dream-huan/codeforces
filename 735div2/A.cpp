#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,a[200005];
        long long ans=-1;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==2){
            cout<<a[0]*a[1]<<"\n";
            continue;
        }
        for(int i=1;i<n-1;i++){
            ans=max(ans,max(a[i]*a[i-1],a[i]*a[i+1]));
        }
        cout<<ans<<"\n";
    }
    return 0;
}