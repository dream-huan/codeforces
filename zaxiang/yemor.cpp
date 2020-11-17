#include<bits/stdc++.h>
using namespace std;
int n,m,sx,sy,dx,dy,minm=999999;
char a[20][20];
bool b[20][20];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int x,int y,int s){
    if(x==dx&&y==dy){
        minm=min(minm,s);
        return;
    }
    if(s>minm) return;
    for(int i=0;i<4;i++){
        int x1=x+dir[i][0];
        int y1=y+dir[i][1];
        if(x1>=0&&x1<n&&y1>=0&&y1<m&&a[x1][y1]!='#'&&!b[x1][y1]){
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
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]=='S') {
            sx=i;
            sy=j;
        }
        if(a[i][j]=='E'){
            dx=i;
            dy=j;
        }
    }
    b[sx][sy]=1;
    dfs(sx,sy,0);
    if(minm==999999) cout<<-1<<endl;
    else cout<<minm<<endl;
    return 0;
}