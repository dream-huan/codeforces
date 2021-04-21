#include<bits/stdc++.h>
using namespace std;

const int N=10e5+5;

struct node{
    int l,r;
}a[N];

int n,m;
set<int>ignore1;

void insert(int data,int index,int direction=1){
    if(!direction){
        //左插
        a[data].r=index;
        a[a[index].l].r=data;
        a[data].l=a[index].l;
        a[index].l=data;
    }else{
        //右插
        a[data].l=index;
        a[a[index].r].l=data;
        a[data].r=a[index].r;
        a[index].r=data;
    }
}
void view(){
    int x=a[0].r;
    while(1){
        if(!ignore1.count(x)) cout<<x<<" ";
        if(a[x].r==-1) break;
        x=a[x].r;
        }
    cout<<endl;
}

void inital(){
    for(int i=1;i<=n;i++) a[i].l=a[i].r=-1;
    a[1].l=0,a[0].r=1;
}

void del(int data){
    if(a[data].l==-1) return;
    a[a[data].l].r=a[data].r;
    a[a[data].r].l=a[data].l;
    a[data].l=-1;
    a[data].r=-1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    inital();
    for(int i=2;i<=n;i++){
        int index,direction;
        cin>>index>>direction;
        insert(i,index,direction);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        ignore1.insert(temp);
    }
    view();
    /*cout<<"i:";
    for(int i=0;i<n;i++) cout<<i<<" ";
    cout<<endl<<"L:";
    for(int i=0;i<n;i++){
        cout<<a[i].l<<" ";
    }
    cout<<endl<<"R:";
    for(int i=0;i<n;i++){
        cout<<a[i].r<<" ";
    }*/
    return 0;
}