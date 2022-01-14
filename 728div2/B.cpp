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
        int n,a[100005],sum=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            // int k=1;
            //j=ka[i]-i
            /* while(k*a[i]-i<i){
                k++;
            } */
            int j=a[i]-i;
            if(j<i){
                int k=2*i/a[i];
                j=k*a[i]-i+a[i];
            }
            for(;j<=n;j+=a[i]){
                if(a[i]*a[j]==i+j) sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}