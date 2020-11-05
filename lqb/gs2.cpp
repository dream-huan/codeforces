#include<bits/stdc++.h>
using namespace std;

int ans;
bool b[7][7];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int x,int y,int s){
    if(s>12) return;
    if(x==0&&y==0&&b[x][y]) ans++;
    for(int i=0;i<4;i++){
        int x1=x+dir[i][0];
        int y1=y+dir[i][1];
        if(x1>=0&&x1<7&&y1>=0&&y1<7&&!b[x1][y1]){
            b[x1][y1]=1;
            dfs(x1,y1,s+1);
            b[x1][y1]=0;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    dfs(0,0,0);
    cout<<ans-2<<endl;
    return 0;
}