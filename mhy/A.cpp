#include<bits/stdc++.h>
using namespace std;

int n,ans;
vector<int>a;
vector<pair<int,int>>b;
int c[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        b.push_back(make_pair(a[i],t));
    }
    sort(b.begin(),b.end(),[=](pair<int,int> a,pair<int,int> b){return a.second>b.second;});
    for(int i=n;i>=1;i--){
        for(int j=0;j<n;j++) if(b[j].second==i){
            c[i]=b[j].second;
            break;
        }
    }
    for(int i=n-1;i>=1;i--){

    }
    for(int i=0;i<n;i++){
        ans-=(b[i].first);
    }
    cout<<ans<<endl;
    return 0;
}