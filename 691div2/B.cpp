#include<bits/stdc++.h>
using namespace std;
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}},ans;
bool b[2005][2005];
int n;

void dfs(int x,int y,int s,int temp){
    if(n==s){
        if(!b[x][y]){
            ans++;
            b[x][y]=1;
        }
        return;
    }
    for(int i=(temp==1?0:2);i<(temp==1?2:4);i++){
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];
        dfs(dx,dy,s+1,-1*temp);
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    dfs(1002,1002,0,-1);
    dfs(1002,1002,0,1);
    cout<<ans<<endl;
}