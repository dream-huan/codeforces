#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        double n,m,maxm=-1;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            double temp;
            cin>>temp;
            maxm=max(maxm,temp);
            m-=(temp*0.7);
        }
        m+=(maxm*0.7);
        if(m-maxm>=0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}