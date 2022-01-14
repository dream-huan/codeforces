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
        int n,k=1;
        long long base=1;
        cin>>n;
        int a[100005];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            base=(base*(i+1)/__gcd(base,i+1));
            if(a[i]%base==0) k=0;
        }
        if(k){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}