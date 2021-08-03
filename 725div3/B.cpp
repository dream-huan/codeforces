#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[200005],sum=0,ans=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
        if(sum%n!=0){
            cout<<-1<<"\n";
            continue;
        }
        sum/=n;
        for(int i=0;i<n;i++) if(a[i]>sum) ans++;
        cout<<ans<<"\n";
    }
    return 0;
}