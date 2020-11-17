#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,a[105],sum;
        cin>>n>>m;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}