#include<bits/stdc++.h>
using namespace std;

int n,dx,dy,sx,sy;
int fx[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
char a[55][55];
int a1[55][55];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        cin>>a[i][j];
        if(a[i][j]=='S') sx=i,sy=j;
        if(a[i][j]=='E') dx=i,dy=j;
    }
    queue<pair<int,int>>b;
    b.push(make_pair(sx,sy));
    while(b.size()){
        int x=b.front().first,y=b.front().second;
        if(x==dx&&y==dy){
            break;
        }
        b.pop();
        for(int i=0;i<4;i++){
            int nx=x+fx[i][0],ny=y+fx[i][1];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&a[nx][ny]!='#'&&!a1[nx][ny]){
                b.push(make_pair(nx,ny));
                a1[nx][ny]=a1[x][y]+1;
            }
        }
    }
    cout<<a1[n-1][n-1]<<endl;
    return 0;
}