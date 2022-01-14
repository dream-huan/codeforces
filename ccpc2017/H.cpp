#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[100005],sum=0,d=0;
        int ans=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
        for(int i=0;i<n;i++) if(sum/a[i]==n) d++;
        if(d==n){
            if(sum==n){
                cout<<n-1<<endl;
                continue;
            }else{
                cout<<0<<endl;
                continue;
            }
        }
        vector<int>factor;
        for(int i=1;i*i<=sum;i++) if(sum%i==0) factor.push_back(i),factor.push_back(sum/i);
        for(int i=0;i<factor.size();i++){
            if(factor[i]==1) continue;
            unordered_map<int,int>c;
            int temp=0;
            // cout<<factor[i]<<endl;
            for(int j=0;j<n;j++){
                // cout<<a[j]<<endl;
                // cout<<abs(a[j]-((a[j]/factor[i])+1)*factor[i])<<" "<<abs(a[j]-(a[j]/factor[i])*factor[i])<<endl;
                c[min(abs(a[j]-((a[j]/factor[i])+1)*factor[i]),abs(a[j]-(a[j]/factor[i])*factor[i]))]++;
            }
            // for(int j=0;j<n;j++) cout<<b[j]<<" ";
            // cout<<endl;
            for(int j=1;j<=factor[i];j++){
                if(c[j]&1) c[j]=c[j]/2+1;
                else c[j]/=2;
            }
            for(int j=1;j<=factor[i];j++) temp+=(c[j]*j);
            ans=min(ans,temp);
            c.clear();
        }
        cout<<ans<<endl;
    }
    return 0;
}