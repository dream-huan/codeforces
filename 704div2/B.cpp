#include<bits/stdc++.h>
using namespace std;
int n,p[100005],d[100005],now,end1;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        end1=n;
        for(int i=1;i<=n;i++) cin>>p[i],d[p[i]]=i;
        for(int i=end1;i>0;i--){
            if(!d[i]) continue;
            now=d[i];
            for(int j=d[i];j<=end1;j++){
                cout<<p[j]<<" ";
                d[p[j]]=0;
            }
            end1=now-1;
        }
        cout<<endl;
    }
    return 0;
}