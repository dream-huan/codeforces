#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,a[8],sum=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
        if(n+3*sum>=7){
            cout<<7*5<<endl;
        }else if(sum==0) {
            cout<<n*5<<endl;
        }else{
            cout<<(n+sum)*5<<endl;
        }
    }
    return 0;
}