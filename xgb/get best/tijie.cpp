#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("5.in","r",stdin);
    // freopen("5.out","w",stdout);
    int n,a[200005];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(a[0]<0){
        for(int i=1;i<n;i++) a[i]+=a[0];
        cout<<a[n-1]-a[1]<<"\n";
    }
    else{
        cout<<a[n-1]-a[0]<<"\n";
    }
    return 0;
}