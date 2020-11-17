#include<bits/stdc++.h>
using namespace std;

int dp[2][100005];
int a[100005],b[100005];
bool now=1,pre=0;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    //string s1,s2;
    //cin>>s1>>s2;
    for(int i=0;i<n;i++){
        swap(now,pre);
        for(int j=0;j<n;j++){
            if(a[i]==b[j]) dp[now][j+1]=dp[pre][j]+1;
            else dp[now][j+1]=max(dp[pre][j+1],dp[now][j]);
        }
    }
    cout<<dp[now][n];
    return 0;
}