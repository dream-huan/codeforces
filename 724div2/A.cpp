#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a[105];
        int n,k=1;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],a[i]<0?k=0:1;
        if(!k){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<101<<endl;
            for(int i=0;i<101;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}

#undef endl