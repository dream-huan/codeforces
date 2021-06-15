#include<bits/stdc++.h>
using namespace std;\

#define endl "\n"

void solve(){
    int n;
    string a[27];
    cin>>n;
    string s;
    cin>>s;
    a[0]="";
    for(int i=1;i<=26;i++) a[i]=(char)((i-1)+'a');
    for(int i=0;i<=26;i++){
        for(int j=0;j<=26;j++){
            for(int k=0;k<=26;k++){
                for(int d=0;d<=26;d++){
                    for(int e=0;e<=26;e++){
                        string temp=a[i]+a[j]+a[k]+a[d]+a[e];
                        // cout<<temp<<endl;
                        if(s.find(temp)==string::npos){
                            cout<<temp<<endl;
                            return;
                        }
                    }
                }
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