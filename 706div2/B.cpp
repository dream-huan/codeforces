#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,temp,maxm=-1,less=0,left=0,t1=0,init=0;
        cin>>n>>k;
        set<int>a;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.insert(temp);
            maxm=max(maxm,temp);
        }
        for(auto temp:a){
            if(!t1) init=temp,less=temp;
            else{
                if(temp-less>=2){
                    left=less+1,t1=1;
                    break;
                }
                less=temp;
            }
            t1++;
        }
        if(!k){
            cout<<a.size()<<endl;
            continue;
        }
        if(!left&&!init) cout<<a.size()+k<<endl;
        else{
            if(init!=0) cout<<a.size()+1-a.count((maxm+1)/2)<<endl;
            else cout<<a.size()+1-a.count(round((maxm+left)*1.0/2))<<endl;
        }
    }
    return 0;
}