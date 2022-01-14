#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        string s;
        cin>>s;
        int minm=0;
        for(int i=0;i<s.length();i++)  if(s[i]-'a'<s[minm]-'a') minm=i;
        cout<<s[minm]<<" "<<s.substr(0,minm)+s.substr(minm+1,s.length()-minm-1)<<"\n";
    }
    return 0;
}