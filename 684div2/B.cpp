#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,a[1000005],sum=0;
        cin>>n>>k;
        for(int i=0;i<n*k;i++){
            cin>>a[i];
        }
        if(n&1){
            for(int i=k;i<n*k;i+=(n-1)){
                sum+=a[i];
            }
        }else{
            for(int i=n/2-1;i<n*k;i+=(n-1)) {
                sum+=a[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}