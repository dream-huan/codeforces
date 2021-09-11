#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        pair<int,int>point={0,0};
        map<pair<int,int>,int>m;
        set<pair<int,int>>ns;
        ns.insert({0,0});
        m[{0,0}]=1;
        int k,ans=0;
        string s;
        cin>>k>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='U') point.second+=1;
            else if(s[i]=='D') point.second-=1;
            else if(s[i]=='L') point.first-=1;
            else point.first+=1;
            // cout<<point.first<<" "<<point.second<<endl;
            if(ns.count(point)) ans+=m[point],m[point]++;
            else ns.insert(point),m[point]=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}