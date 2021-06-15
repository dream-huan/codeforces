/* #include<bits/stdc++.h>
using namespace std;

int n,m,sx,sy,dx,dy,mins=INT_MAX;
char a[105][105];
bool b[105][105];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int x,int y,int s,int left){
    if(x==dx&&y==dy){
        mins=min(mins,s);
        return;
    }
    for(int i=0;i<4;i++){
        int nx=x+dir[i][0];
        int ny=y+dir[i][1];
        if(nx>=0&&ny>=0&&nx<n&&ny<n&&a[nx][ny]!='#'&&!b[nx][ny]&&left>0){
            if(a[nx][ny]=='$'){
                b[nx][ny]=1;
                dfs(nx,ny,s+1,left-1+m);
                b[nx][ny]=0;
            }else{
                b[nx][ny]=1;
                dfs(nx,ny,s+1,left-1);
                b[nx][ny]=0;
            }
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        cin>>a[i][j];
        if(a[i][j]=='S') sx=i,sy=j;
        if(a[i][j]=='E') dx=i,dy=j;
    }
    b[sx][sy]=1;
    dfs(sx,sy,0,m);
    if(mins==INT_MAX) cout<<-1<<endl;
    else cout<<mins<<endl;
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int n,m,sx,sy,dx,dy,mins=INT_MAX;
char a[105][105];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

bool dfs(int x,int y,int s,int left){
    if(x==dx&&y==dy){
        mins=min(mins,s);
        return 1;
    }
    if(s>=mins) return;
    for(int i=0;i<4;i++){
        int nx=x+dir[i][0];
        int ny=y+dir[i][1];
        if(nx>=0&&ny>=0&&nx<n&&ny<n&&a[nx][ny]!='#'&&left>0){
            if(a[nx][ny]=='$'){
                a[nx][ny]='.';
                dfs(nx,ny,s+1,left-1+m);
                a[nx][ny]='$';
            }else{
                dfs(nx,ny,s+1,left-1);
            }
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        cin>>a[i][j];
        if(a[i][j]=='S') sx=i,sy=j;
        if(a[i][j]=='E') dx=i,dy=j;
    }
    dfs(sx,sy,0,m);
    if(mins==INT_MAX) cout<<-1<<endl;
    else cout<<mins<<endl;
    return 0;
}