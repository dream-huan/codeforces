#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,a[105][105],ans=0;
        vector<int>b;
        vector<int>c;
        int fs=0,le=0,zs=0;
        cin>>n>>m;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]<0) fs++,b.push_back(a[i][j]);
            else if(a[i][j]==0) le++;
            else zs++,c.push_back(a[i][j]);
        }
        if(le>=1){
            for(int i=0;i<b.size();i++) ans+=(-1)*b[i];
            for(int i=0;i<c.size();i++) ans+=c[i];
            cout<<ans<<endl;
            continue;
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        if(fs%2==0){
            for(int i=0;i<b.size();i++) ans+=(-1)*b[i];
            for(int i=0;i<c.size();i++) ans+=c[i];
        }
        else{
            for(int i=0;i<b.size()-1;i++) ans+=(-1)*b[i];
            if(zs>=1&&c[0]<abs(b[b.size()-1])){
                ans+=(-1)*c[0];
                ans+=abs(b[b.size()-1]);
                for(int i=1;i<c.size();i++) ans+=c[i];
            }
            else{
                ans+=b[b.size()-1];
                for(int i=0;i<c.size();i++) ans+=c[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}