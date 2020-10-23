#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize(2)

inline int read(){
    int s=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        s=(s<<3)+(s<<1)+(ch^48);
        ch=getchar();
    }
    return s*f;
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int b;
    b=read();
    cout<<b<<endl;
    return 0;
}