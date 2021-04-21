#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<pair<char,int>>a;
    map<int,char>b;
    int k=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(a.empty()){
            a.push(make_pair(s[i],i));
            continue;
        }
        if(a.top().first=='('&&s[i]==')'){
            a.pop();
            continue;
        }
        else if(a.top().first=='['&&s[i]==']'){
            a.pop();
            continue;
        }else a.push(make_pair(s[i],i));
    }
    while(!a.empty()){
        b.insert(pair<int,char>(a.top().second,a.top().first));
        a.pop();
    }
    for(int i=0;i<s.length();i++){
        if(b[i]=='(') cout<<s[i]<<')';
        else if(b[i]=='[') cout<<s[i]<<']';
        else if(b[i]==']') cout<<'['<<s[i];
        else if(b[i]==')') cout<<'('<<s[i];
        else cout<<s[i];
    }
    return 0;
}