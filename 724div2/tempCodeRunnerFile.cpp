#include<bits/stdc++.h>
using namespace std;\

#define endl "\n"

void solve(){
    int n,a[27];
    memset(a,0,sizeof(a));
    cin>>n;
    string s;
    cin>>s;
    for(char i:s) a[i-'a']++;
    for(int i=0;i<26;i++) if(a[i]==0){
        cout<<(char)(i+'a')<<endl;
        return;
    }
    int minm=0x7fffffff,maxm=-1;
    for(int i=0;i<26;i++) minm=min(minm,a[i]),maxm=max(maxm,a[i]);
    // cout<<maxm<<" "<<minm<<endl;
    if(maxm-minm==1){
        for(int i=0;i<26;i++){
            if(a[i]==minm){
                for(int j=0;j<minm;j++) cout<<'a';
                cout<<(char)(i+'a')<<endl;
                return;
            }
        }
    }else if(maxm==minm){
        for(int i=0;i<=maxm;i++) cout<<'a';
        cout<<endl;
        return;
    }else{
        for(int i=0;i<26;i++){
            if(a[i]==minm){
                for(int j=0;j<=minm;j++) cout<<(char)(i+'a');
                cout<<endl;
                return;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}