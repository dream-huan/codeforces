#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll sj(ll x){
    if(x%100<=31){
        x/=100;
        if(x%100<=12) return true;
    } 
    return false;
}
inline ll pd(ll x){
    ll a[9];
    ll i=1;
    while(x>0){
        a[i++]=x%10;
        x/=10;
    }
    if(a[1]==a[8]&&a[2]==a[7]&&a[3]==a[6]&&a[5]==a[4]) return true;
    else return false;
}
int main(){
    ll ans=0;
    for(int i=0;i<=99991231;i++){
        if(pd(i)&&sj(i)){
            cout<<i<<",";
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}