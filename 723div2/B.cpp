#include<bits/stdc++.h>
using namespace std;

int dir[8]={11,111,1111,11111,111111,1111111,11111111,111111111};
bool k;

void dfs(int x,int len){
    // cout<<x<<" "<<len<<endl;
    if(len<0){
        if(x==0) k=1;
        return;
    }
    for(int i=len;i>=0;i--){
        if(x>=dir[i]) dfs(x%dir[i],i-1);
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        k=0;
        int x;
        cin>>x;
        dfs(x,7);
        k?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    }
    return 0;
}