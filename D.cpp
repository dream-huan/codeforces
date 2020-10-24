#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans,n,k;
string s="GuangdongPharmaceuticalUniversity";
bool pd(ll x){
    int t;
    while(x>0){
        t=x%10;
        if(t==5) return true;
        x/=10;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<s.length();i++){
        if(pd((int)(s[i]))) ans++;
    }
    cout<<ans<<endl;
    return 0;
}