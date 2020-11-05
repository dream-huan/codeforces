#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,s1=0,sum=0,last=-1,k=1,ans=0;
        vector<int>c;
        cin>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                sum++;
                if(i-last!=1&&last!=-1){
                    c.push_back(i-last-1);
                    k++;
                }
                last=i;
            }
        }
        if(sum==0){
            cout<<0<<endl;
            continue;
        }
        sort(c.begin(),c.end());
        ans+=k*a;
        for(int i=0;i<c.size();i++){
            if(b*c[i]<a) ans=ans-a+b*c[i];
        }
        cout<<ans<<endl;
    }
    return 0;
} 