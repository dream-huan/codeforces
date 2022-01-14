#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        string s;
        cin>>s;
        int k=0;
        for(char i:s){
            if((i-'0')%2){
                k++;
            }
        }
        if(k==s.length()) cout<<-1<<"\n";
        else{
            if((s[s.length()-1]-'0')%2==0) cout<<0<<"\n";
            else cout<<((s[0]-'0')%2==0?1:2)<<"\n";
        }
    }
    return 0;
}