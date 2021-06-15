#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[100005];
        pair<int,int>minm;
        minm=make_pair(INT_MAX,-1);
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<minm.first){
                minm.first=a[i];
                minm.second=i;
            }
        }
        cout<<n-1<<endl;
        int mid=minm.second;
        for(int i=1;i<mid;i++){
            if(mid==i) continue;
            cout<<mid<<" "<<i<<" "<<a[mid]<<" "<<a[mid]+mid-i<<endl;
        }
        for(int i=mid+1;i<=n;i++){
            cout<<mid<<" "<<i<<" "<<a[mid]<<" "<<a[mid]+i-mid<<endl;
        }
    }
    return 0;
}