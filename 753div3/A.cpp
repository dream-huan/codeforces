#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        string s1,s2;
        int ans=0;
        cin>>s1>>s2;
        map<char,int>m;
        for(int i=0;i<s1.length();i++) m[s1[i]]=i;
        for(int i=1;i<s2.length();i++){
            if(s2[i]==s2[i-1]) continue;
            ans+=(abs(m[s2[i]]-m[s2[i-1]]));
        }
        cout<<ans<<"\n";
    }
    return 0;
}