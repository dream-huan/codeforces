#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=2*1e5+5;
int n,m;
ll msum,ssum;//msum:mousesum,老鼠的总数量,ssum:streetsum,“真实”街道的数量
ll c[N];
set<int>s;

ll find(ll x){
    return c[x]==x?x:c[x]=find(c[x]);
}

void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) c[i]=i;//所有人初始的祖先都是自己
    for(int i=0;i<m;i++){
        int p1,p2;//p1,p2:街道1和街道2
        cin>>p1>>p2;
        c[find(p1)]=find(p2);
    }
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        msum+=num;
    }
    for(int i=1;i<=n;i++){
        int father=find(i);
        if(!s.count(father)){
            ssum++;
            s.insert(father);
        }
    }
    ll ans=(ceil)(msum*1.0/ssum);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}