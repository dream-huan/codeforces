#include<bits/stdc++.h>
using namespace std;
#define forn() for(int i=0;i<n;i++)
#define form() for(int i=n-1;i>=0;i--)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,a[100005],c[100005];
        double ans=1.0;
        vector<int>d;
        pair<int,double>b[100005];
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i],c[i]=a[i];
        for(int i=0;i<m;i++) cin>>b[i].first>>b[i].second;
        sort(c,c+n);
        for(int i=0;i<n;i++){
            if(a[i]!=c[i]) d.push_back(a[i]);
        }
        for(int i=0;i<d.size();i++){
            for(int j=0;j<m;j++){
                if(d[i]==b[j].first) ans*=b[j].second;
            }
        }
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
    return 0;
}