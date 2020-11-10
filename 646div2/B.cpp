#include<bits/stdc++.h>
using namespace std;

bool gz(string s){
    int k1=0;
    char a='0';
    for(int i=0;i<s.length();i++){
        if(s[i]==a){
            k1++;
            if(a=='0') a='1';
            else a='0';
        }
    }
    if(k1>=3) return false;
    a='1';
    k1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==a){
            k1++;
            if(a=='0') a='1';
            else a='0';
        }
    }
    if(k1>=3) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        int sum1=0,sum2=0;
        cin>>s;
        if(gz(s)){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') sum1++;
            else sum2++;
        }
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}