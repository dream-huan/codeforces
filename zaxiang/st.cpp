#include<bits/stdc++.h>
using namespace std;

int n,m;
const int N=1e6+5;
int st[N][22];

inline int read(){
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

inline int query(int l,int r){
    int k=log2(r-l+1);
    return min(st[l][k],st[r-(1<<k)+1][k]);
}

int main(){
    n=read(),m=read();
    for(int i=1;i<=n;i++) st[i][0]=read();
    //建表
    //i-i^2(k-1)-1 i^2(k-1)-i^2k-1
    for(int j=1;j<=21;j++){
        for(int i=0;i+(1<<j)-1<=n;i++){
            st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        cout<<query(l,r)<<endl;
    }
    return 0;
}