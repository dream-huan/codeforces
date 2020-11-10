/*
#include<bits/stdc++.h>
using namespace std;

int n,a[10005],dp[10005];

int lcs(){
    dp[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]<a[j]) dp[j]=dp[j-1]+1;
            else dp[j]=dp[j-1];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int temp=0;
    while(t--){
        cin>>a[temp++];
    }
    n=temp-1;
    cout<<lcs()<<endl;
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int n,a[10005],dp[10005];

int lcs(){
    int ans=1;
    dp[0]=1;
    for(int i=1;i<n;i++){
        int maxm=0;
        for(int j=0;j<i;j++){
            if(dp[j]>maxm&&a[j]<a[i]) maxm=dp[j];
        }
        dp[i]=maxm+1;
        if(dp[i]>ans) ans=dp[i];
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int temp=0;
    while(t--){
        cin>>a[temp++];
    }
    n=temp-1;
    cout<<lcs()<<endl;
    return 0;
}
