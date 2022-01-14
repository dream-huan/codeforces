#include<bits/stdc++.h>
using namespace std;

class point{
    public:
    int x,y;
};
int dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
int n;
char a[2005][2005];
bool b[2005][2005];
int s[2005][2005];
int ans=-1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    // memset(b,0,sizeof(b));
    point start;
    point end;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='S') start.x=i,start.y=j;
            if(a[i][j]=='E') end.x=i,end.y=j;
        }
    }
    memset(s,0x3f,sizeof(s));
    s[start.x][start.y]=0;
    queue<point>que;
    que.push(start);
    while(!que.empty()){
        int x=que.front().x,y=que.front().y;
        // cout<<x<<" "<<y<<endl;
        que.pop();
        if(x==end.x&&y==end.y) ans=1;
        b[x][y]=1;
        for(int i=0;i<4;i++){
            int dx=x+dir[i][0],dy=y+dir[i][1];
            point p;
            p.x=dx,p.y=dy;
            if(dx>=0&&dx<n&&dy>=0&&dy<n&&(!b[dx][dy])&&a[dx][dy]!='#') que.push(p),s[dx][dy]=min(s[dx][dy],s[x][y]+1);
            // cout<<dx<<" "<<dy<<endl;
            // if(1>=0&&1<n&&4>=0&&4<n&&(!b[1][4])&&a[1][4]!='#') cout<<"YES"<<endl;
        }
    }
    cout<<s[end.x][end.y]<<endl;
    return 0;
}