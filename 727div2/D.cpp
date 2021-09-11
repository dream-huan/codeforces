#include<bits/stdc++.h>
using namespace std;

#define int long long

bool cmp(pair<int,int>a,pair<int,int>b) {return a.second<b.second;}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,sum=0,ans=0;
    cin>>n;
    int l=0,r=n-1,now=0;
    pair<int,int>a[100005];
    for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
    sort(a,a+n,cmp);
    while(l<=r){
        /* while(l<=r&&a[l].second<=now){
            ans+=a[l].first;
            now+=a[l].first;
            a[l].first=0;
            l++;
        } */
        if(a[l].second<=now){
            ans+=a[l].first;
            now+=a[l].first;
            a[l].first=0;
            l++;
        }else{
            if(a[r].first>0){
                int temp=min(a[l].second-now,a[r].first);
                now+=temp;
                ans+=(2*temp);
                a[r].first-=temp;
            }else r--;
        }      
        // for(int i=0;i<n;i++) cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<ans<<endl;
    return 0;
}