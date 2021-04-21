#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        /*
        int n,p,k,x,y,b[100005],minm=INT_MAX;
        string a;
        memset(b,0,sizeof(b));
        cin>>n>>p>>k;
        cin>>a;
        cin>>x>>y;
        for(int i=0;i<n-p;i++){
            for(int j=i+p-1;j<n;j+=k){
                if(a[j]!='1') b[i]++;
            }
            b[i]*=x;
            b[i]+=(i*y);
        }
        for(int i=0;i<n-p;i++) if(min(minm,b[i])==b[i]) minm=b[i];
        cout<<minm<<endl;*/
        int n,p,k,x,y,dp[100005],minm=INT_MAX;
        string a;
        memset(dp,0,sizeof(dp));
        cin>>n>>p>>k;
        cin>>a;
        cin>>x>>y;
        for(int i=p-1;i<n;i++){
            dp[i]=y*(i-p+1);
            if(i-k<p-1) if(a[i]=='0') dp[i]+=x;
            //cout<<dp[i]<<endl;
        }
        for(int i=p+k-1;i<n;i++){
            if(a[i]=='1') dp[i]=min(dp[i],dp[i-k]);
            else dp[i]=min(dp[i-k],dp[i])+x;
        }
        for(int i=max(n-k,p-1);i<n;i++){
            minm=min(dp[i],minm);
        }
        cout<<minm<<endl;
    }
    return 0;
}