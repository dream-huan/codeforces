#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,maxm=-1*(1e9+1);
        double sum=0;
        int a[200005];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],maxm=max(maxm,a[i]),sum+=a[i];
        // cout<<maxm<<" "<<sum<<endl;
        sum-=maxm;
        sum/=(n-1);
        sum+=maxm;
        cout<<fixed<<setprecision(8)<<sum<<endl;
    }
    return 0;
}