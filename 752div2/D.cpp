#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        long long x,y;
        cin>>x>>y;
        if(x>y) cout<<x+y<<"\n";
        else cout<<(y-y%x/2)<<"\n";
    }
    return 0;
}