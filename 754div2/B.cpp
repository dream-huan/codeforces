#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>one;
        vector<int>zero;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') one.push_back(i);
            else zero.push_back(i);
        }
        vector<int>ans;
        int k=0;
        for(int i=0;i<zero.size();i++){
            if(k<one.size()&&one[k]<zero[i]){
                ans.push_back(one[k]);
                ans.push_back(zero[i]);
                k++;
            }
        }
        if(ans.empty()) cout<<0<<"\n";
        else{
            ans.clear();
            int line=n-one.size();
            for(int i:one) if(i<line) ans.push_back(i+1);
            for(int i:zero) if(i>=line) ans.push_back(i+1);
            cout<<1<<"\n";
            cout<<ans.size()<<" ";
            for(int i:ans) cout<<i<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


/* 
10100
00011
11000

 */