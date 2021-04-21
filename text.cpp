#include<bits/stdc++.h>
using namespace std;
const int cs[3]={2,3,5};
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll ans=1;
    priority_queue<ll,vector<ll>,greater<ll>>a;
    set<int>b;
    a.push(1);
    b.insert(1);
    for(int i=1;;i++){
        ll ans=a.top();
        a.pop();
        if(i==1500) {cout<<ans<<endl;break;}
        for(int j=0;j<3;j++){
            ll t=ans*cs[j];
            if(!b.count(t)) b.insert(t),a.push(t);
        }
    }
    return 0;
}