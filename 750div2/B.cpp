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
        int n,a[65],sum=0;
        int one=0,zero=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            // sum+=a[i];
            if(a[i]==1) one++;
            if(a[i]==0) zero++;
        }
        if(zero==0&&one==0){
            cout<<0<<endl;
        }else if(one==0){
            cout<<0<<endl;
        }else if(zero==0){
            cout<<one<<endl;
        }else{
            int times=pow(2,zero);
            cout<<times*one<<endl;
        }
    }
    return 0;
}