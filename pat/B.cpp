#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
string temp;
vector<string>a;
vector<string>b;
set<string>c;
inline int zh(string x){
    int jg=0;
    for(int i=0;i<x.length();i++){
        jg+=x[i]-'0';
    }
    return jg;
}
/*inline int cz(string x){
    for(int i=0;i<a.size();i++){
        if(a[i]==x) return true;
    }
    return false;
}*/
inline bool cmp(string a,string b){
    if(c.count(a)&&c.count(b)) return zh(a.substr(6,13))>zh(b.substr(6,13));
    else if(c.count(a)||c.count(b)) return c.count(a);
    else return zh(a.substr(6,13))>zh(b.substr(6,13));
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
        c.insert(temp);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp;
        if(c.count(temp)){
            b.push_back(temp);
            ans++;
        }else{
            b.push_back(temp);
        }
    }
    cout<<ans<<endl;
    sort(b.begin(),b.end(),cmp);
    cout<<b[0]<<endl;
    return 0;
}