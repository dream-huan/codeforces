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
        int n,x,t,sum=0;
        cin>>n>>x>>t;
        if(x>t) sum=0;
        else if(x==t) sum+=(n-1);
        else{
            int temp=t/x;
            sum+=((n-temp<0?0:n-temp)*temp);
            if(n>=temp) sum+=(temp*(temp-1)/2);
            else sum+=(n*(n-1)/2);
        }
        cout<<sum<<"\n";
    }
    return 0;
}