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
        int a[100005];
        cin>>n;
        bool temp=1;
        for(int i=1;i<=n;i++) cin>>a[i],temp&=a[i]>a[i-1];
        if(n&1){
            !temp?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
        }else cout<<"YES"<<"\n";
    }
    return 0;
}