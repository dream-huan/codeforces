#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,temp,minm=0x7fffffff,ans=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>temp;
            a[i]=temp;
            minm=min(minm,a[i]);
        }
        for(int i=0;i<n;i++) if(minm!=a[i]) ans++;
        cout<<ans<<endl;
    }
    return 0;
}