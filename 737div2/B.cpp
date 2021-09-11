#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,k;
        int a[100005];
        int b[100005];
        unordered_map<int,int>m;
        cin>>n>>k;
        int sum=n;
        for(int i=0;i<n;i++) cin>>a[i],b[i]=a[i];
        sort(b,b+n);
        for(int i=1;i<n;i++) m[b[i]]=b[i-1];
        m[b[0]]=INT_MAX;
        for(int i=1;i<n;i++){
            if(m[a[i]]==a[i-1]) sum--;
        }
        // if(a[0]==b[0]) sum--;
        if(sum<=k) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}