#include<bits/stdc++.h>
using namespace std;

const int N=2*1e5+5;
const long long mod=1e9+7;

long long solve(int n){
    long long ans=1;
    for(int i=n;i>=2;i--) ans=((ans%mod)*(i%mod))%mod;
    ans%=mod;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[N],k=1;
        cin>>n;
        int minm=0x7fffffff,mins=0;
        for(int i=0;i<n;i++) cin>>a[i],minm=min(minm,a[i]);
        for(int i=0;i<n;i++){
            if(a[i]==minm) mins++;
            if((minm&a[i])!=minm){
                cout<<0<<endl;
                k=0;
                break;
            }
        }
        if(k) cout<<((solve(n-2)%mod)*((mins%mod*(mins-1)%mod)%mod))%mod<<endl;
    } 
    return 0;
}