#include<bits/stdc++.h>
using namespace std;
int k,n,m,a[1005],f[1005],h[1005];
int b[100005],c[100005],d[100005];
set<int>e;
set<int>g;
int fhzx(int x){
    if(a[x]==x) return x;
    else return a[x]=fhzx(a[x]);
}
int main(){
    cin>>k>>n>>m;
    int cs=0,last;
    for(int i=0;i<m;i++){
        if(last!=b[i]){
            a[last]=cs;
            cs=0;
        }
        if(cs>=k) e.insert(last);
        cin>>b[i]>>c[i]>>d[i];
        if(e.count(c[i])){
            f[c[i]]++;
        }
        last=b[i];
        if(d[i]<k) cs++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]>k&&f[i]<(0.2)*a[i]) g.insert(i);
    }
    for(int i=0;i<m;i++){
        if(g.count(b[i])&&g.count(c[i])){
            h[fhzx(b[i])]=h[fhzx(c[i])];
        }
    }
    for(int i=0;i<=)
    return 0;
}