#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        int a[105];
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(i==n-1) break;
            if(k>=a[i]){
                int less=a[i];
                k-=less;
                a[n-1]+=less;
                a[i]=0;
            }
            else{
                a[i]-=k;
                a[n-1]+=k;
                k=0;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}