#include<bits/stdc++.h>
using namespace std;

int n,a,k,ans,t;
int h[1005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>a>>k;
    for(int i=0;i<n;i++){
        cin>>h[i];
        if(h[i]<k) ans++;
        if(h[i]>=k&&!t) ans++,t=1;
    }
    cout<<ans<<endl;
    return 0;
}
