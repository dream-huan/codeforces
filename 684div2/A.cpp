#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,c0,c1,h,s0=0,s1=0;
        string s;
        cin>>n>>c0>>c1>>h>>s;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='0') s0++;
            else s1++;
        }
        if(h<abs(c0-c1)){
            if(c0>c1){
                cout<<s.length()*c1+h*s0<<endl;
            }else{
                cout<<s.length()*c0+h*s1<<endl;
            }
        }else cout<<c0*s0+c1*s1<<endl;
    }
    return 0;
}