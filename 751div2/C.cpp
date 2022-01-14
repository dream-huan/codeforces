#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,a[200005],maxm=-1;
        unordered_map<int,int>m;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            int t=a[i];
            int k=0;
            while(t){
                m[k++]+=(t&1);
                t>>=1;
            }
        }
        for(int i=1;i<=n;i++){
            int t=1;
            for(int j=0;j<30;j++){
                if(m[j]%i!=0){
                    t=0;
                    break;
                }
            }
            if(t) cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}