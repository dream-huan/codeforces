#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<(n-k)+(k/2)<<endl;
        for(int i=n;i>k;i--) cout<<i<<" ";
        for(int i=k-1;i>(k-1)/2;i--) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
