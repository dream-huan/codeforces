#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[100005],k=1;
        cin>>n;
        for(int i=0;i<n;i+=2){
            a[i]=k;
            k++;
        }
        for(int i=1;i<n;i+=2){
            a[i]=k;
            k++;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}