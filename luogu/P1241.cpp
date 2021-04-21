#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int index;
        char ch;
};

stack<node>a;
int vis[105];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.length();i++){
        node x;
        x.index=i;
        x.ch=s[i];
        if(!a.empty()&&a.top().ch=='('&&s[i]==')'){
            vis[i]=1;
            vis[a.top().index]=1;
            a.pop();
            continue;
        }
        else if(!a.empty()&&a.top().ch=='['&&s[i]==']'){
            vis[i]=1;
            vis[a.top().index]=1;
            a.pop();
            continue;
        }
        if(s[i]=='('||s[i]=='[') a.push(x);
    }
    //while(!a.empty()) cout<<a.top().ch<<" "<<a.top().index<<endl,a.pop();
    for(int i=0;i<s.length();i++){
        if(vis[i]==0){
            if(s[i]=='('||s[i]==')') cout<<"()";
            else if(s[i]=='['||s[i]==']') cout<<"[]";
        }else cout<<s[i];
    }
    return 0;
}