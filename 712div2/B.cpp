#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1,s2;
    int n,sum=0,zero1=0,zero2=0,one1=0,one2=0;
    cin>>n;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<n;i++){
        if(s1[i]=='1'&&s2[i]=='1'){
            sum++;
        }
        if(s1[i]=='1') one1++;
        if(s2[i]=='1') one2++;
        if(s1[i]=='0') zero1++;
        if(s2[i]=='0') zero2++;
    }
    if(one1!=one2) cout<<"NO"<<endl;
    else if(sum&1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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