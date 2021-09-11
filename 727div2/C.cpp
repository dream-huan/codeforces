#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,x;
    int a[200005];
    vector<int>sum;
    cin>>n>>k>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++){
        // cout<<(a[i]-a[i-1])<<endl;
        if(a[i]-a[i-1]>x) sum.push_back((a[i]-a[i-1]-1)/x);
    }
    if(k==0) cout<<sum.size()+1<<endl;
    else{
        int temp=0;
        sort(sum.begin(),sum.end());
        for(int i=0;i<sum.size();i++){
            // cout<<sum[i]<<endl;
            if(k>=sum[i]) k-=sum[i],temp++;
        }
        cout<<sum.size()+1-temp<<endl;
    }
    return 0;
}