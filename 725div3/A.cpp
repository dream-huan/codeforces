#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[105];
        int minm=0x7fffffff,maxm=-1,index1,index2;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(maxm<a[i]){
                maxm=a[i];
                index1=i;
            }
            if(minm>a[i]){
                minm=a[i];
                index2=i;
            }
        }
        if(index1>index2) swap(index1,index2);
        cout<<min(min(index2+1,n-index1),index1+1+n-index2)<<"\n";
    }
    return 0;
}