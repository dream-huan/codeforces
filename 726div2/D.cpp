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
        cin>>n;
        if(n&1){
            cout<<"Bob"<<"\n";
        }else{
            int cnt=0;
            while(n%2==0){
                n/=2;
                cnt++;
            }
            if(n>1||cnt%2==0) cout<<"Alice"<<"\n";
            else cout<<"Bob"<<"\n";
        }
    }
    return 0;
}