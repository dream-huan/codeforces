#include<bits/stdc++.h>
using namespace std;

int main(){
    int _;
    cin>>_;
    while(_--){
        int n,a[55],sum=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
        if(sum>n) cout<<sum-n<<"\n";
        else if(sum==n) cout<<0<<"\n";
        else cout<<1<<"\n";
    }
    return 0;
}