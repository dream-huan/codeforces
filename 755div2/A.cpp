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
        int u,v;
        cin>>u>>v;
        cout<<u*u<<" "<<-1*v*v<<"\n";
    }
    return 0;
}


/* 
a=(u+v)
b=(u+v)u
c=(u+v)v
x(u+v)/(u+v)u+y(u+v)/(u+v)v=(x+y)/(u+v)
xv(u+v)/(u+v)uv+yu(u+v)/(u+v)uv=(x+y)/(u+v)
xv(u+v)+yu(u+v)/(u+v)uv=uv(x+y)/(u+v)
(xv+yu)(u+v)=uv(x+y)
x=1
(v+yu)(u+v)=uv(1+y)
vu+vv+yuu+yuv=uv+uvy
y(uu+uv-uv)=uv-vu-vv
y=
 */