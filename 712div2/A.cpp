#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

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

bool pardel(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}

void solve(string s){
    string ns1,ns2;
    ns1='a'+s;
    ns2=s+'a';
    if(!pardel(ns1)) {
        cout<<"YES"<<endl;
        cout<<ns1<<endl;
        return;
    }
    if(!pardel(ns2)){
        cout<<"YES"<<endl;
        cout<<ns2<<endl;
        return;
    }
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}