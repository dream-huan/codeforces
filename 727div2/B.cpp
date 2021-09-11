#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    pair<int,int> a[100005];
    vector<int>cs;
    int alphabet[27];
    string s;
    // memset(cs,0,sizeof(cs));
    cin>>n>>q>>s;
    for(int i=0;i<q;i++) cin>>a[i].first>>a[i].second;
    for(int i=1;i<=26;i++) alphabet[i]=i;
    for(int i=0;i<s.length();i++){
        cs.push_back(alphabet[s[i]-'a'+1]);
    }
    for(int i=1;i<cs.size();i++) cs[i]+=cs[i-1];
    // for(int i=0;i<cs.size();i++) cout<<cs[i]<<" ";
    // cout<<endl;
    for(int i=0;i<q;i++){
        if(a[i].first!=1) cout<<cs[a[i].second-1]-cs[a[i].first-2<0?0:a[i].first-2]<<endl;
        else cout<<cs[a[i].second-1]<<endl;
    }
    return 0;
}