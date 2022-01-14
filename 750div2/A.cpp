#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int a,b,c;
        cin>>a>>b>>c;
        a+=2*b;
        a+=3*c;
        if(a&1) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}