#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,b=1,nt=0,nm=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='T') nt++;
            else nm++;
            if(nm>nt){
                b=0;
                break;
            }
        }
        if(!b||nt!=2*nm){
            cout<<"NO"<<endl;
            continue;
        }
        nt=0,nm=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='T') nt++;
            else nm++;
            if(nm>nt) {
                b=0;
                break;
            }
        }
        if(!b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}