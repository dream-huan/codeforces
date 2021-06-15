#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int one=0,zero=0;
        string s;
        cin>>n;
        cin>>s;
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
    return 0;
}