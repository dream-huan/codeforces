#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,p;

ll quickpow(int n,int m){
    ll ans=1,base=n;
    while(m){
        if(m&1) ans=ans*base%p;
        base*=base%p;
        m>>=1;
    }
    return ans%p;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>p;
    cout<<n<<"^"<<m<<" mod "<<p<<"="<<quickpow(n,m)<<endl;
    return 0;
}
