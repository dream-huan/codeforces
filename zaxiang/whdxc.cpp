#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int maxm=-1,lxx=0;
        char lx='!';
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                if(lx=='!') lx=s[i],lxx++;
                else lxx++;
            }else maxm=max(maxm,lxx),lxx=0,lx='!';
        }
        maxm=max(maxm,lxx);
        cout<<maxm<<endl;
    }
    return 0;
}