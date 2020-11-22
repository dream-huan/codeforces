#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,w,k=0,ans=0,temp=-1;
        ll a[200005];
        ll dp[200005];
        memset(dp,0,sizeof(dp));
        set<ll>b;
        cin>>n>>w;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        for(ll i=n;i>0;i--){
            if(temp==1) break;
            for(ll j=w;j>=a[i];j--){
                if(dp[j-1]+a[i]<=w){
                    dp[j]=dp[j-1]+a[i];
                    b.insert(i);
                }
                else dp[j]=dp[j-1];
                if(dp[j]>=max(w/2,(ll)1)){
                    temp=1;
                    break;
                }
            }
        }
        if(dp[w]<max(w/2,(ll)1)){
            cout<<-1<<endl;
            continue;
        }
        cout<<b.size()<<endl;
        for(set<ll>::iterator i=b.begin();i!=b.end();i++) cout<<*i<<" ";
        cout<<endl;
    }
    return 0;
}