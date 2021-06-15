#include<bits/stdc++.h>
using namespace std;

bool hw(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]) return false;
    }
    return true;
}

void solve(int n,string s){
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
    }
    if(one==n) cout<<"ALICE"<<endl;
    else if(one==n-1) cout<<"BOB"<<endl;
    else{
        if(n&1){
            if(s[n/2]=='0') cout<<"ALICE"<<endl;
            else cout<<"BOB"<<endl;
        }else cout<<"BOB"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(hw(s)) solve(n,s);
        else{
            int one=0,zero=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1') one++;
                else zero++;
            }
            if(n&1&&s[n/2]=='0'&&zero==2) cout<<"DRAW"<<endl;
            else cout<<"ALICE"<<endl;
        }
    }
    return 0;
}