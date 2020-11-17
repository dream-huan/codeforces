#include<bits/stdc++.h>
using namespace std;

long long a[1000005],n,m,maxm;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i],maxm=max(maxm,a[i]);
    long long left=0,right=maxm;
    while(left<=right){
        long long mid=(left+right)/2,sum=0;
        for(int i=0;i<n;i++) if(a[i]>mid) sum+=(a[i]-mid);
        if(sum<m) right=mid-1;
        else left=mid+1;
    }
    cout<<right<<endl;
    return 0;
}