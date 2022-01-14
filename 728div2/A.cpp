#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&1){
            n--;
            for(int i=1;i<n;i+=2){
                if(i+1>=n-1) cout<<i+1<<" ";
                else cout<<i+1<<" "<<i<<" ";
            }
            cout<<n+1<<" "<<n-1<<endl;
        }else{
            for(int i=1;i<n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}