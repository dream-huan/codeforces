#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,a[2005];
        cin>>n;
        map<pair<int,int>,int>m;
        map<int,vector<int>>m2;
        vector<int>t;
        for(int i=0;i<n;i++) cin>>a[i],m[make_pair(0,a[i])]++,t.push_back(a[i]);
        m2[0]=t;
        for(int i=1;i<=62;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                a[j]=m[make_pair(i-1,a[j])];
                m[make_pair(i,a[j])]++;
                temp.push_back(a[j]);
                // cout<<a[j]<<" ";
            }
            m2[i]=temp;
            // cout<<endl;
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x,k;
            cin>>x>>k;
            if(k>=62) k=62;
            cout<<m2[k][x-1]<<endl;
        }
    }
    return 0;
}