#include<bits/stdc++.h>
using namespace std;

int b[100005];
pair<int,int> a[100005];
int ans[100005];

inline int find(int x,int t=-1){
    if(b[x]==t) return t;
    if(b[x]==x) return x;
    else return find(b[x]);
}

int cmp(pair<int,int>a,pair<int,int>b){
    return a.first>b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) b[i]=i,a[i].second=i;
        vector<pair<int,int>>e;
        for(int i=1;i<=n-1;i++){
            int c,v;
            cin>>c>>v;
            e.push_back(make_pair(c,v));
        }
        memset(ans,0,sizeof(ans));
        for(int i=1;i<=n;i++) cin>>a[i].first;
        for(auto i:e){
            if(a[i.first].first>a[i.second].first) b[find(i.first)]=find(i.second);
            else b[find(i.second)]=find(i.first);
        }
        sort(a+1,a+n+1,cmp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<endl;
                cout<<a[i].second<<" "<<a[j].second<<endl;
                cout<<find(a[i].second)<<" "<<find(a[j].second)<<endl;
                cout<<endl;
                if(find(a[i].second)==find(a[j].second)) ans[a[j].second]++;
            }
            // b[a[i].second]=a[i].second;
            b[a[i].second]=a[i].second;
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

/*
所有节点正常
4 4
5 5


4 2
5 5


4 5
5 5


4 3
5 5


4 1
5 5

删除4号节点

2 4
0 0

2 2
0 0


2 5
0 5


2 3
0 0


2 1
0 0

删除2号节点

5 4
5 0

5 2
5 0


5 5
5 5


5 3
5 0


5 1
5 0

删除3号节点

3 4
0 0

3 2
0 0


3 5
0 0


3 3
0 0


3 1
0 0

删除1号节点

1 4
0 0


1 2
0 0


1 5
0 0


1 3
0 0


1 1
0 0





4 4
5 5


4 2
5 5


4 5
5 5


4 3
5 5


4 1
5 5


2 4
5 0


2 2
5 5


2 5
5 5


2 3
5 5


2 1
5 5


5 4
5 0


5 2
5 0


5 5
5 5


5 3
5 5


5 1
5 5


3 4
0 0


3 2
0 0


3 5
0 0


3 3
0 0


3 1
0 0


1 4
0 0


1 2
0 0


1 5
0 0


1 3
0 0


1 1
0 0
*/