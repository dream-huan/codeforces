#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>a;
        int k=0,sum=0,ans=0;
        for(int i=8;i<s.length();i++){
            if(s[i]=='h') {
                if(sum!=0) a.push_back(sum),sum=0;
            }
            if(s[i]=='a'||s[i]=='e') sum++;
        }
        if(sum!=0) a.push_back(sum),sum=0;
        for(int i=0;i<a.size();i++){
            sum=0;
            sum+=a[i];
            for(int j=i+1;j<a.size();j++){
                sum+=a[j];
            }
            ans=ans+pow(2,sum)-1;
        }
        cout<<ans%988244353<<endl;
    }
    return 0;
}