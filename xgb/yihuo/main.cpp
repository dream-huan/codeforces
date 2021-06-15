#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        long long ans[100005];
        cin>>n;
        ans[0]=3;
        for(int i=0;i<n;i++){
            cin>>temp;
            ans[i+1]=ans[i]^temp;
        }
        for(int i=0;i<n+1;i++) i!=n?cout<<ans[i]<<" ":cout<<ans[i];
        cout<<endl;
    }
    return 0;
}