#include<bits/stdc++.h>
using namespace std;

#define int long long

inline int qread(){
    int ans=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        ans=(ans<<3)+(ans<<1)+(ch^48);
        ch=getchar();
    }
    return ans*f;
}

const int N=1e5+5;
// const int M=log10(N)/log10(2);
int n,m;
int a[N][22];

signed main(){
    n=qread();
    m=qread();
    for(int i=1;i<=n;++i) a[i][0]=qread();
    for(int j=1;j<=21;++j){
        for(int i=1;i+(1<<(j-1))-1<=n;++i){
            a[i][j]=max(a[i][j-1],a[i+(1<<(j-1))][j-1]);
        }//
    }
    int x,y;
    while(m--){
        x=qread(),y=qread();
        int k=log(y-x+1)/log(2);
        printf("%lld\n",max(a[x][k],a[y-(1<<k)+1][k]));
    }
    return 0;
}