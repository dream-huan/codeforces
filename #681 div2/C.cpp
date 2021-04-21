#include<bits/stdc++.h>
using namespace std;

inline int read(int x){
    int s=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&& ch<='9'){
        s=(s<<3)+(s<<1)+(ch^48);
        ch=getchar();
    }
    return s*f;
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    long long t;
    cin>>t;
    while(t--){
        long long n,maxm=0;
        pair<long long,long long> a[200005];
        cin>>n;
        for(long long i=0;i<n;i++) a[i].first=read(),maxm=max(maxm,a[i].first);
        for(long long i=0;i<n;i++) read(a[i].second);
        long long l=0,r=maxm,ans,mid;
        while(l<=r){
            mid=(l+r)/2;
            long long tans=0;
            for(long long i=0;i<n;i++){
                if(a[i].first>mid) tans+=a[i].second;
            }
            if(tans<=mid) ans=mid,r=mid-1;
            else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}