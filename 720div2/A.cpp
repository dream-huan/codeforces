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
        int a,b;
        cin>>a>>b;
        if(b==1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(b==2){
                cout<<a*3<<" "<<a*5<<" "<<a*8<<endl;
            }else{
                cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
            }
        }
    }
    return 0;
}