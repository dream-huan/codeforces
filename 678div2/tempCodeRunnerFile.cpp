#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll c[200005];
ll n,a[200005],b[200005];

ll fh(ll x){
    if(c[x]==x) return x;
    return c[x]=fh(c[x]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll ans=0,sum=0,sum2=0;
    set<ll>g;
    cin>>n;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=1;i<=n;i++) c[i]=i;
    for(int i=1;i<n;i++){
        cin>>a[i];
        c[fh(i)]=fh(a[i]);
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        sum2+=b[i];
    }
    for(int i=1;i<=n;i++){
        if(!g.count(fh(i))){
            sum++;
            g.insert(fh(i));
        }
    }
    g.clear();
    if(sum==2){
        cout<<sum2<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(!g.count(fh(i))){
            b[i]=(ceil)(sum2*1.0/sum);
            g.insert(fh(i));
        }else b[i]=0;
    }
    //for(int i=1;i<=n;i++) cout<<b[i]<<endl;
    for(int i=1;i<=n;i++){
        ans=max(b[i],ans);
    }
    cout<<ans<<endl;
    return 0;
}