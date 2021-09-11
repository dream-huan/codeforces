#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,a[200005];
        int less=INT_MAX,lessx;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(n==2){
            cout<<a[0]<<" "<<a[1]<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(i>=1&&min(less,a[i]-a[i-1])==a[i]-a[i-1]){
                less=a[i]-a[i-1];
                lessx=i;
            }
        }
        for(int i=lessx;i<n;i++) cout<<a[i]<<" ";
        for(int i=0;i<lessx;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}