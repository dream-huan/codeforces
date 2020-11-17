#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[105];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n&1){
            for(int i=n-1;i>(n+1)/2;i--) cout<<(-1)*a[i]<<" ";
            cout<<(a[n/2+1])<<" ";
            cout<<(a[n/2+1])<<" ";
            cout<<(-1)*(a[n/2]+a[n/2-1])<<" ";
            for(int i=n/2-2;i>=0;i--) cout<<a[i]<<" ";
            cout<<endl;
        }else{
            for(int i=n-1;i>=n/2;i--) cout<<(-1)*a[i]<<" ";
            for(int i=(n-1)/2;i>=0;i--) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}