#include<bits/stdc++.h>
using namespace std;

int n,m;
int head,tail;
int q[100005][2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    cin>>q[head][0];
    tail++;
    for(int i=1;i<n;i++){
        if(q[head][1]<i-m) head++;
        if(i>=m) cout<<q[head][0]<<"\n";
        int temp;
        cin>>temp;
        while(tail>head&&q[tail-1][0]>temp) tail--;
        q[tail][0]=temp,q[tail][1]=i;
        tail++;
    }
    if(q[head][1]<n-m) head++;
    cout<<q[head][0]<<"\n";
    return 0;
}