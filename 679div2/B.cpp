#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,temp,a[505][505];
        cin>>n>>m;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>temp;
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>a[i][j];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}