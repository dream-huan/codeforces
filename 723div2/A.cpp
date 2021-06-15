#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k=1;
        int a[26];
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        for(int i=0;i<n;i++){
            if(k==1) cout<<a[2*n-i-1]<<" "<<a[i]<<" ";
            else cout<<a[i]<<" "<<a[2*n-i-1]<<" ";
            k*=-1;
        }
        cout<<endl;
    }
    return 0;
}