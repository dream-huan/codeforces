#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,k,num=1;
ll dp[10005],sum[10005];
pair<ll,ll> a[10005];

bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    return a.first>b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    ll temp1,temp2;
    for(ll i=1;i<=k;i++) {
        cin>>temp1>>temp2;
        a[i]=make_pair(temp1,temp2);
        sum[temp1]++;
    }
    sort(a+1,a+1+k,cmp);
    for(ll i=n;i>=1;i--){
        if(sum[i]==0) dp[i]=dp[i+1]+1;
        else for(ll j=1;j<=sum[i];j++){
            if(dp[i+a[num].second]>dp[i]) dp[i]=dp[i+a[num].second];
            num++;
        }
    }
    cout<<dp[1]<<endl;
    return 0;
}