#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[105];
        string s="";
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<=50;i++) s+='a';
        cout<<s<<endl;
        for(int i=0;i<n;i++){
            s[a[i]]='b';
            cout<<s<<endl;
        }
    }
    return 0;
}