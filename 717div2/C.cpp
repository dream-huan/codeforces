#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool check(vector<int> &a,int sum){
    int n=a.size();
    vector<vector<int>> dp(n,vector<int>(sum+1));
    dp[0][0]=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<=sum;j++){
            if(j>=a[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    /* for(int i=0;i<n;i++){
        for(int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } */
    return dp[n-1][sum]==sum;
}

void solve(){
    int n,sum=0,odd=-1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]&1) odd=i;
    }
    if(sum%2||!check(a,sum/2)){
        cout<<0<<endl;
        return;
    }else{
        if(odd!=-1){
            cout<<1<<endl<<odd+1<<endl;
            return;
        }else{
            while(1){
                for(int i=0;i<n;i++){
                    a[i]/=2;
                    if(a[i]&1){
                        cout<<1<<endl<<i+1<<endl;
                        return;
                    }
                }
            }
        }
    }
}

int main(){
    IOS;
    solve();
    return 0;
}