#include<bits/stdc++.h>
using namespace std;

int a[10005][10005];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
queue<pair<pair<int,int>,int>>q;
long long sum=4;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    q.push(make_pair(make_pair(2100,2100),0));
    q.push(make_pair(make_pair(4120,4111),0));
    q.push(make_pair(make_pair(4111,4114),0));
    q.push(make_pair(make_pair(4100,4100),0));
    a[2100][2100]=1;
    a[4120][4111]=1;
    a[4111][4114]=1;
    a[4100][4100]=1;
    while(!q.empty()){
        int x=q.front().first.first,y=q.front().first.second;
        q.pop();
        for(int i=0;i<4;i++){
            int dx=x+dir[i][0],dy=y+dir[i][1];
            if(!a[dx][dy]&&q.front().second<=2020){
                a[dx][dy]=1;
                sum++;
                q.push(make_pair(make_pair(dx,dy),q.front().second+1));
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}